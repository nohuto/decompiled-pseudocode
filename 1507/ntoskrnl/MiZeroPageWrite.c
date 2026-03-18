/*
 * XREFs of MiZeroPageWrite @ 0x140112300
 * Callers:
 *     MmZeroPageWrite @ 0x140112288 (MmZeroPageWrite.c)
 * Callees:
 *     IoFreeMdl @ 0x140031620 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x140033BF0 (IoAllocateMdl.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     FsRtlIsTotalDeviceFailure @ 0x140082458 (FsRtlIsTotalDeviceFailure.c)
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     IoSynchronousPageWriteEx @ 0x140112630 (IoSynchronousPageWriteEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiRetardMdl @ 0x14021414C (MiRetardMdl.c)
 */

__int64 __fastcall MiZeroPageWrite(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  PMDL Mdl; // rax
  int v5; // r8d
  int v6; // r10d
  struct _MDL *v7; // rbx
  __int64 v8; // rdi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdi
  CSHORT MdlFlags; // r13
  CSHORT v12; // r13
  struct _MDL *v13; // rdx
  unsigned int v14; // esi
  __int64 v15; // r12
  int v16; // eax
  struct _MDL *v17; // rcx
  __int64 v18; // rdx
  NTSTATUS v19; // r15d
  int v21; // [rsp+30h] [rbp-D0h]
  __int16 v22; // [rsp+34h] [rbp-CCh]
  __int16 Object; // [rsp+40h] [rbp-C0h] BYREF
  char v25; // [rsp+42h] [rbp-BEh]
  int v26; // [rsp+44h] [rbp-BCh]
  _QWORD v27[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h]
  NTSTATUS v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h]
  _BYTE v31[176]; // [rsp+70h] [rbp-90h] BYREF

  Mdl = (PMDL)a3;
  v22 = a3;
  v5 = (int)a2;
  v6 = a1;
  v28 = a1;
  v7 = 0LL;
  v8 = (unsigned int)Mdl;
  v9 = ((unsigned __int64)&Mdl[85].MdlFlags + 5) >> 12;
  if ( a4 && (unsigned int)Mdl > a4 )
    v8 = a4;
  if ( (unsigned int)v8 > 0x10000 )
  {
    Mdl = IoAllocateMdl(0LL, v8, 0, 0, 0LL);
    v5 = (int)a2;
    v7 = Mdl;
    LOWORD(Mdl) = v22;
    v6 = v28;
  }
  v10 = (unsigned __int64)(v8 + 4095) >> 12;
  if ( v7 )
  {
    MdlFlags = v7->MdlFlags;
  }
  else
  {
    v7 = (struct _MDL *)v31;
    MdlFlags = 0;
    if ( (unsigned int)v10 > 0x10 )
      LODWORD(v10) = 16;
  }
  v21 = 0;
  v12 = MdlFlags | 0x4002;
  v13 = v7 + 1;
  v14 = v10;
  do
  {
    if ( v14 > (unsigned int)v9 )
      v14 = v9;
    v15 = v14 << 12;
    if ( (_DWORD)v9 == v14 )
    {
      LODWORD(v10) = v9;
      v16 = (unsigned __int16)Mdl & 0xFFF;
      if ( v16 )
        v15 = (v16 | (unsigned int)v15) - 4096;
    }
    v7->ByteCount = v15;
    v17 = v13;
    v7->Next = 0LL;
    v7->Size = 8 * (((unsigned __int64)(v15 + 4095) >> 12) + 6);
    v7->StartVa = 0LL;
    v7->ByteOffset = 0;
    v7->MdlFlags = v12;
    if ( v14 )
    {
      v18 = v14;
      do
      {
        v17->Next = (struct _MDL *)qword_14034F710;
        v17 = (struct _MDL *)((char *)v17 + 8);
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
    v19 = IoSynchronousPageWriteEx(v6, (_DWORD)v7, v5, (unsigned int)&Object, 0, (__int64)&v29);
    if ( v19 >= 0 )
    {
      KeWaitForSingleObject(&Object, WrPageOut, 0, 0, 0LL);
      v19 = v29;
    }
    if ( (v7->MdlFlags & 0x200) != 0 )
      MiRetardMdl(v7);
    if ( (v7->MdlFlags & 1) != 0 )
      MmUnmapLockedPages(v7->MappedSystemVa, v7);
    if ( v19 >= 0 )
    {
      v5 = (int)a2;
      LODWORD(v9) = v9 - v14;
      *a2 += (unsigned int)v15;
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
    if ( v19 != -1073741670
      && v19 != -1073741663
      && v19 != -1073741801
      && ((unsigned int)v15 <= 0x1000 || FsRtlIsTotalDeviceFailure(v19)) )
    {
      break;
    }
    if ( v14 == 1 )
      break;
    v5 = (int)a2;
    v14 >>= 1;
LABEL_25:
    LOWORD(Mdl) = v22;
    v13 = v7 + 1;
    v6 = v28;
  }
  while ( (_DWORD)v9 );
  if ( v7 != (struct _MDL *)v31 )
    IoFreeMdl(v7);
  return (unsigned int)v19;
}
