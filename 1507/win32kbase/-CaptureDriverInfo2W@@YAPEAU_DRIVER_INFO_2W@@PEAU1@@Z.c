/*
 * XREFs of ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C00B28A0
 * Callers:
 *     NtGdiOpenDCW @ 0x1C0053200 (NtGdiOpenDCW.c)
 * Callees:
 *     AllocThreadBufferWithTag @ 0x1C00044B0 (AllocThreadBufferWithTag.c)
 *     FreeThreadBufferWithTag @ 0x1C000B380 (FreeThreadBufferWithTag.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

struct _DRIVER_INFO_2W *__fastcall CaptureDriverInfo2W(struct _DRIVER_INFO_2W *a1)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r13
  _BYTE *v5; // rcx
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  size_t v11; // r12
  unsigned __int64 v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  void *v15; // rcx
  void *v16; // rcx
  __int64 Size; // [rsp+20h] [rbp-58h]
  size_t v19; // [rsp+80h] [rbp+8h]

  v2 = *((_QWORD *)a1 + 1);
  if ( !v2 )
    return 0LL;
  v3 = *((_QWORD *)a1 + 3);
  if ( !v3 )
    return 0LL;
  v4 = *((_QWORD *)a1 + 4);
  if ( !v4 )
    return 0LL;
  if ( (v2 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = W32UserProbeAddress;
  if ( v2 + 2 > (unsigned __int64)W32UserProbeAddress || v2 + 2 < v2 )
  {
    *(_BYTE *)W32UserProbeAddress = 0;
    v5 = W32UserProbeAddress;
  }
  if ( (v3 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( v3 + 2 > (unsigned __int64)v5 || v3 + 2 < v3 )
  {
    *v5 = 0;
    v5 = W32UserProbeAddress;
  }
  v6 = -1LL;
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)(v2 + 2 * v7) );
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)(v3 + 2 * v8) );
  if ( v7 + 1 < v7 )
    return 0LL;
  if ( v8 + 1 < v8 )
    return 0LL;
  if ( !is_mul_ok(v7 + 1, 2uLL) )
    return 0LL;
  if ( !is_mul_ok(v8 + 1, 2uLL) )
    return 0LL;
  v19 = 2 * v7;
  v9 = 2 * v7 + 50;
  if ( v9 < 0x30 )
    return 0LL;
  Size = 2 * v8;
  v10 = 2 * v8 + 2 * v7 + 52;
  if ( v10 < v9 )
    return 0LL;
  if ( (v4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( v4 + 2 > (unsigned __int64)v5 || v4 + 2 < v4 )
    *v5 = 0;
  do
    ++v6;
  while ( *(_WORD *)(v4 + 2 * v6) );
  if ( v6 + 1 < v6 )
    return 0LL;
  if ( !is_mul_ok(v6 + 1, 2uLL) )
    return 0LL;
  v11 = 2 * v6;
  v12 = 2 * v6 + v10 + 2;
  if ( v12 < v10 || v12 < 0x30 || v12 > 0x2710000 )
    return 0LL;
  v13 = (_QWORD *)AllocThreadBufferWithTag(v12, 1886221383LL, 0);
  v14 = v13;
  if ( v13 )
    memset(v13, 0, (unsigned int)v12);
  if ( v14 )
  {
    *(_DWORD *)v14 = *(_DWORD *)a1;
    v14[5] = 0LL;
    v14[2] = 0LL;
    v14[1] = v14 + 6;
    v14[3] = (char *)v14 + v19 + 50;
    if ( v19 + v2 < v2 || v19 + v2 > (unsigned __int64)W32UserProbeAddress )
      *(_BYTE *)W32UserProbeAddress = 0;
    memmove(v14 + 6, (const void *)v2, v19);
    v15 = (void *)v14[3];
    if ( Size + v3 < v3 || Size + v3 > (unsigned __int64)W32UserProbeAddress )
      *(_BYTE *)W32UserProbeAddress = 0;
    memmove(v15, (const void *)v3, Size);
    v16 = (void *)(Size + v14[3] + 2LL);
    v14[4] = v16;
    if ( v11 + v4 < v4 || v11 + v4 > (unsigned __int64)W32UserProbeAddress )
      *(_BYTE *)W32UserProbeAddress = 0;
    memmove(v16, (const void *)v4, v11);
  }
  return (struct _DRIVER_INFO_2W *)v14;
}
