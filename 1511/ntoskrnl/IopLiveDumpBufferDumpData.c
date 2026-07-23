/*
 * XREFs of IopLiveDumpBufferDumpData @ 0x1403AE2A8
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x1403AF798 (IopLiveDumpProcessCorralStateChange.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     MmMapMemoryDumpMdlEx @ 0x1401198BC (MmMapMemoryDumpMdlEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     IopLiveDumpGetCapturePagesNoLock @ 0x1403AEF08 (IopLiveDumpGetCapturePagesNoLock.c)
 */

void __fastcall IopLiveDumpBufferDumpData(__int64 *a1, unsigned int *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ecx
  __int64 v4; // r13
  _RTL_BITMAP_EX *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rdi
  unsigned int v8; // r15d
  unsigned int v9; // ebp
  unsigned int v10; // edx
  char *v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rbx
  _DWORD *v16; // rsi
  _DWORD *v17; // r8
  unsigned __int64 v18; // rcx
  _DWORD *v19; // rdi
  __int64 v20; // [rsp+30h] [rbp-278h] BYREF
  _DWORD *v21; // [rsp+38h] [rbp-270h]
  __int64 v22; // [rsp+40h] [rbp-268h]
  __int64 v23; // [rsp+48h] [rbp-260h]
  _RTL_BITMAP_EX *v24; // [rsp+50h] [rbp-258h]
  __int64 v25; // [rsp+58h] [rbp-250h] BYREF
  char v26; // [rsp+60h] [rbp-248h] BYREF

  v2 = *a1;
  v3 = *a2;
  v4 = v2 + 488;
  v23 = v2 + 488;
  if ( v3 < *(_DWORD *)(v2 + 560) )
  {
    v5 = (_RTL_BITMAP_EX *)(v2 + 368);
    v6 = *(_QWORD *)(v2 + 568) + 16LL * v3;
    v24 = (_RTL_BITMAP_EX *)(v2 + 368);
    v7 = *(_QWORD *)(v6 + 8) + 48LL;
    v22 = v7;
    while ( 1 )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)(v4 + 24));
      IopLiveDumpGetCapturePagesNoLock(v5, (__int64)&v20, (__int64)&v25);
      KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 24));
      v8 = v20;
      if ( !(_DWORD)v20 )
        break;
      v9 = 0;
      v21 = *(_DWORD **)(*(_QWORD *)(v4 + 64) + 8 * v25);
      v10 = 0;
      v11 = &v26;
      do
      {
        v12 = v10++;
        *(_QWORD *)(v7 + 8 * v12) = *(_QWORD *)v11;
        if ( v10 == 16 || v10 && v9 == v8 - 1 )
        {
          v13 = *(_QWORD *)(v6 + 8);
          v14 = v10 << 12;
          v15 = (unsigned int)v14;
          *(_QWORD *)v13 = 0LL;
          *(_WORD *)(v13 + 10) = 0;
          *(_QWORD *)(v13 + 32) = 0LL;
          *(_QWORD *)(v13 + 40) = (unsigned int)v14;
          *(_WORD *)(v13 + 8) = 8 * (((unsigned __int64)(v14 + 4095) >> 12) + 6);
          MmMapMemoryDumpMdlEx(*(_QWORD *)v6, v14, *(_QWORD *)(v6 + 8), 0LL);
          v16 = *(_DWORD **)(*(_QWORD *)(v6 + 8) + 24LL);
          v17 = v21;
          v18 = (unsigned __int64)(unsigned int)v15 >> 2;
          v19 = v21;
          while ( v18 )
          {
            *v19++ = *v16++;
            --v18;
          }
          v7 = v22;
          v21 = (_DWORD *)((char *)v17 + v15);
          v10 = 0;
        }
        ++v9;
        v11 += 8;
      }
      while ( v9 < v8 );
      v4 = v23;
      v5 = v24;
    }
  }
}
