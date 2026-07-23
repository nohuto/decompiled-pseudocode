/*
 * XREFs of HvpAdjustBitmap @ 0x14047DCD0
 * Callers:
 *     HvpAdjustHiveFreeDisplay @ 0x14047DC5C (HvpAdjustHiveFreeDisplay.c)
 * Callees:
 *     RtlClearBits @ 0x14002D260 (RtlClearBits.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall HvpAdjustBitmap(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int *v3; // r14
  unsigned int v4; // ebx
  unsigned int v7; // esi
  unsigned int v8; // edi
  unsigned int v9; // edi
  __int64 v10; // rdx
  void *v11; // rax
  void *v12; // rbp
  const void *v13; // r15
  unsigned int v15; // eax

  v3 = (unsigned int *)(a3 + 8);
  v4 = a2 >> 12;
  v7 = 256;
  v8 = ((a2 >> 12) + 7) >> 3;
  if ( v8 )
    v9 = (v8 + 255) & 0xFFFFFF00;
  else
    v9 = 256;
  v10 = *v3;
  if ( (_DWORD)v10 )
  {
    v15 = (unsigned int)(v10 + 7) >> 3;
    if ( v15 )
      v7 = (v15 + 255) & 0xFFFFFF00;
  }
  else
  {
    v7 = 0;
  }
  if ( v9 <= *(_DWORD *)a3 )
  {
    *v3 = v4;
    if ( (unsigned int)v10 < v4 )
      RtlClearBits((PRTL_BITMAP)(a3 + 8), v10, v4 - v10);
    return 0LL;
  }
  LOBYTE(v10) = 1;
  v11 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(v9, v10, 959663427LL);
  v12 = v11;
  if ( v11 )
  {
    *(_DWORD *)a3 = v9;
    v13 = (const void *)*((_QWORD *)v3 + 1);
    memset(v11, 0, v9);
    *v3 = v4;
    *((_QWORD *)v3 + 1) = v12;
    if ( v13 )
    {
      memmove(v12, v13, v7);
      (*(void (__fastcall **)(const void *, _QWORD))(a1 + 32))(v13, v7);
    }
    return 0LL;
  }
  return 3221225626LL;
}
