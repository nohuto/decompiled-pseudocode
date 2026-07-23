/*
 * XREFs of IopLiveDumpBufferDumpData @ 0x1403FE6C8
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x1403FFCB8 (IopLiveDumpProcessCorralStateChange.c)
 * Callees:
 *     MmMapMemoryDumpMdlEx @ 0x14014E5A8 (MmMapMemoryDumpMdlEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     IopLiveDumpGetCapturePages @ 0x1403FF334 (IopLiveDumpGetCapturePages.c)
 */

__int64 __fastcall IopLiveDumpBufferDumpData(__int64 *a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v3; // ecx
  __int64 v4; // rdi
  __int64 v5; // r14
  _RTL_BITMAP_EX *v6; // rax
  __int64 v7; // r13
  unsigned int v8; // r15d
  char *v9; // r12
  unsigned int v10; // ebp
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rbx
  _DWORD *v16; // rsi
  unsigned __int64 v17; // rcx
  _DWORD *v18; // rdi
  _DWORD *v19; // r8
  __int64 v20; // [rsp+30h] [rbp-278h] BYREF
  _RTL_BITMAP_EX *v21; // [rsp+38h] [rbp-270h]
  _DWORD *v22; // [rsp+40h] [rbp-268h]
  __int64 v23; // [rsp+48h] [rbp-260h] BYREF
  __int64 v24; // [rsp+50h] [rbp-258h]
  char v25; // [rsp+60h] [rbp-248h] BYREF

  result = *a1;
  v3 = *a2;
  v4 = result + 472;
  v24 = result + 472;
  if ( v3 < *(_DWORD *)(result + 544) )
  {
    v5 = *(_QWORD *)(result + 552) + 16LL * v3;
    v6 = (_RTL_BITMAP_EX *)(result + 368);
    v21 = v6;
    v7 = *(_QWORD *)(v5 + 8);
    while ( 1 )
    {
      result = IopLiveDumpGetCapturePages(v6, (__int64)&v20, (__int64)&v23);
      v8 = v20;
      if ( !(_DWORD)v20 )
        break;
      v9 = &v25;
      v10 = 0;
      v22 = *(_DWORD **)(*(_QWORD *)(v4 + 64) + 8 * v23);
      v11 = 0;
      do
      {
        v12 = v11++;
        *(_QWORD *)(v7 + 8 * v12 + 48) = *(_QWORD *)v9;
        if ( v11 == 16 || v11 && v10 == v8 - 1 )
        {
          v13 = *(_QWORD *)(v5 + 8);
          v14 = v11 << 12;
          v15 = (unsigned int)v14;
          *(_QWORD *)v13 = 0LL;
          *(_WORD *)(v13 + 10) = 0;
          *(_QWORD *)(v13 + 32) = 0LL;
          *(_QWORD *)(v13 + 40) = (unsigned int)v14;
          *(_WORD *)(v13 + 8) = 8 * (((unsigned __int64)(v14 + 4095) >> 12) + 6);
          MmMapMemoryDumpMdlEx(*(_QWORD *)v5, v14, *(_QWORD *)(v5 + 8), 0);
          v16 = *(_DWORD **)(*(_QWORD *)(v5 + 8) + 24LL);
          v17 = (unsigned __int64)(unsigned int)v15 >> 2;
          v18 = v22;
          v19 = (_DWORD *)((char *)v22 + v15);
          while ( v17 )
          {
            *v18++ = *v16++;
            --v17;
          }
          v22 = v19;
          v11 = 0;
        }
        ++v10;
        v9 += 8;
      }
      while ( v10 < v8 );
      v4 = v24;
      v6 = v21;
    }
  }
  return result;
}
