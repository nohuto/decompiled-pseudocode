/*
 * XREFs of MiZeroPageWrite @ 0x14006AE64
 * Callers:
 *     MmZeroPageWrite @ 0x14006ADEC (MmZeroPageWrite.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140025890 (MmUnmapLockedPages.c)
 *     IoAllocateMdl @ 0x14002EB10 (IoAllocateMdl.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     IoFreeMdl @ 0x140071DB0 (IoFreeMdl.c)
 *     IoSynchronousPageWriteEx @ 0x14008DAC8 (IoSynchronousPageWriteEx.c)
 *     MiIsRetryIoStatus @ 0x14008E8D8 (MiIsRetryIoStatus.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiRetardMdl @ 0x1401E2CDC (MiRetardMdl.c)
 */

__int64 __fastcall MiZeroPageWrite(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v4; // r14
  int v5; // r10d
  int v6; // r11d
  __int64 v7; // rdi
  _BYTE *v8; // rbx
  PMDL Mdl; // rax
  unsigned __int64 v10; // rdi
  __int16 v11; // r12
  __int16 v12; // r12
  _QWORD *v13; // rdx
  unsigned int v14; // esi
  __int64 v15; // rax
  __int64 v16; // r13
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  int v19; // r15d
  int v21; // [rsp+40h] [rbp-C0h]
  __int16 v22; // [rsp+44h] [rbp-BCh]
  __int16 Object; // [rsp+50h] [rbp-B0h] BYREF
  char v25; // [rsp+52h] [rbp-AEh]
  int v26; // [rsp+54h] [rbp-ACh]
  _QWORD v27[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h]
  int v29; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h]
  _BYTE v31[176]; // [rsp+80h] [rbp-80h] BYREF

  v22 = a3;
  v4 = ((unsigned __int64)a3 + 4095) >> 12;
  v5 = (int)a2;
  v28 = a1;
  v6 = a1;
  v7 = a3;
  v8 = 0LL;
  if ( a4 && a3 > a4 )
    v7 = a4;
  if ( (unsigned int)v7 > 0x10000 )
  {
    Mdl = IoAllocateMdl(0LL, v7, 0, 0, 0LL);
    LOWORD(a3) = v22;
    v8 = Mdl;
    v5 = (int)a2;
    v6 = v28;
  }
  v10 = (unsigned __int64)(v7 + 4095) >> 12;
  if ( v8 )
  {
    v11 = *((_WORD *)v8 + 5);
  }
  else
  {
    v8 = v31;
    v11 = 0;
    if ( (unsigned int)v10 > 0x10 )
      LODWORD(v10) = 16;
  }
  v21 = 0;
  v12 = v11 | 0x4002;
  v13 = v8 + 48;
  v14 = v10;
  do
  {
    if ( v14 > (unsigned int)v4 )
      v14 = v4;
    v15 = v14 << 12;
    if ( (_DWORD)v4 == v14 )
    {
      LODWORD(v10) = v4;
      if ( (a3 & 0xFFF) != 0 )
        v15 = (a3 & 0xFFF | (unsigned int)v15) - 4096;
    }
    v16 = (unsigned int)v15;
    v17 = v13;
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)v8 + 4) = 0LL;
    *((_WORD *)v8 + 4) = 8 * (((unsigned __int64)(v15 + 4095) >> 12) + 6);
    *((_QWORD *)v8 + 5) = (unsigned int)v15;
    *((_WORD *)v8 + 5) = v12;
    if ( v14 )
    {
      v18 = v14;
      do
      {
        *v17++ = qword_1403276E0;
        --v18;
      }
      while ( v18 );
    }
    Object = 0;
    v27[1] = v27;
    v25 = 6;
    v27[0] = v27;
    v26 = 0;
    v29 = 0;
    v30 = 0LL;
    v19 = IoSynchronousPageWriteEx(v6, (_DWORD)v8, v5, (unsigned int)&Object, 0, 0LL, (__int64)&v29);
    if ( v19 >= 0 )
    {
      KeWaitForSingleObject(&Object, WrPageOut, 0, 0, 0LL);
      v19 = v29;
    }
    if ( (*((_WORD *)v8 + 5) & 0x200) != 0 )
      MiRetardMdl(v8);
    if ( (v8[10] & 1) != 0 )
      MmUnmapLockedPages(*((PVOID *)v8 + 3), (PMDL)v8);
    if ( v19 >= 0 )
    {
      v5 = (int)a2;
      LODWORD(v4) = v4 - v14;
      *a2 += v16;
      if ( v21 )
      {
        --v21;
      }
      else if ( v14 < (unsigned int)v10 )
      {
        v14 = v10;
      }
      goto LABEL_25;
    }
    v21 = 8;
    if ( !(unsigned int)MiIsRetryIoStatus((unsigned int)v19, v16) || v14 == 1 )
      break;
    v5 = (int)a2;
    v14 >>= 1;
LABEL_25:
    LOWORD(a3) = v22;
    v13 = v8 + 48;
    v6 = v28;
  }
  while ( (_DWORD)v4 );
  if ( v8 != v31 )
    IoFreeMdl((PMDL)v8);
  return (unsigned int)v19;
}
