/*
 * XREFs of IopLiveDumpBufferDumpData @ 0x1403FE6C8
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x1403FFCB8 (IopLiveDumpProcessCorralStateChange.c)
 * Callees:
 *     MmMapMemoryDumpMdlEx @ 0x14014E5A8 (MmMapMemoryDumpMdlEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     IopLiveDumpGetCapturePages @ 0x1403FF334 (IopLiveDumpGetCapturePages.c)
 */

__int64 __fastcall IopLiveDumpBufferDumpData(__int64 *a1, unsigned int *a2, __int64 a3, int a4)
{
  __int64 result; // rax
  unsigned int v5; // ecx
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r13
  unsigned int v10; // r15d
  _QWORD *v11; // r12
  unsigned int v12; // ebp
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbx
  _DWORD *v18; // rsi
  unsigned __int64 v19; // rcx
  _DWORD *v20; // rdi
  _DWORD *v21; // r8
  unsigned int v22; // [rsp+30h] [rbp-278h] BYREF
  __int64 v23; // [rsp+38h] [rbp-270h]
  _DWORD *v24; // [rsp+40h] [rbp-268h]
  __int64 v25; // [rsp+48h] [rbp-260h] BYREF
  __int64 v26; // [rsp+50h] [rbp-258h]
  _BYTE v27[512]; // [rsp+60h] [rbp-248h] BYREF

  result = *a1;
  v5 = *a2;
  v6 = result + 472;
  v26 = result + 472;
  if ( v5 < *(_DWORD *)(result + 544) )
  {
    v7 = *(_QWORD *)(result + 552) + 16LL * v5;
    v8 = result + 368;
    v23 = v8;
    v9 = *(_QWORD *)(v7 + 8);
    while ( 1 )
    {
      result = IopLiveDumpGetCapturePages(v8, v6, (unsigned int)v27, a4, (__int64)&v22, (__int64)&v25);
      v10 = v22;
      if ( !v22 )
        break;
      v11 = v27;
      v12 = 0;
      v24 = *(_DWORD **)(*(_QWORD *)(v6 + 64) + 8 * v25);
      v13 = 0;
      do
      {
        v14 = v13++;
        *(_QWORD *)(v9 + 8 * v14 + 48) = *v11;
        if ( v13 == 16 || v13 && v12 == v10 - 1 )
        {
          v15 = *(_QWORD *)(v7 + 8);
          v16 = v13 << 12;
          v17 = (unsigned int)v16;
          *(_QWORD *)v15 = 0LL;
          *(_WORD *)(v15 + 10) = 0;
          *(_QWORD *)(v15 + 32) = 0LL;
          *(_QWORD *)(v15 + 40) = (unsigned int)v16;
          *(_WORD *)(v15 + 8) = 8 * (((unsigned __int64)(v16 + 4095) >> 12) + 6);
          MmMapMemoryDumpMdlEx(*(_QWORD *)v7, v16, *(_QWORD *)(v7 + 8), 0);
          v18 = *(_DWORD **)(*(_QWORD *)(v7 + 8) + 24LL);
          v19 = (unsigned __int64)(unsigned int)v17 >> 2;
          v20 = v24;
          v21 = (_DWORD *)((char *)v24 + v17);
          while ( v19 )
          {
            *v20++ = *v18++;
            --v19;
          }
          v24 = v21;
          v13 = 0;
        }
        ++v12;
        ++v11;
      }
      while ( v12 < v10 );
      v6 = v26;
      LODWORD(v8) = v23;
    }
  }
  return result;
}
