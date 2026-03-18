/*
 * XREFs of ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C00BFD30
 * Callers:
 *     NtGdiOpenDCW @ 0x1C006E790 (NtGdiOpenDCW.c)
 * Callees:
 *     FreeThreadBufferWithTag @ 0x1C006EA90 (FreeThreadBufferWithTag.c)
 *     AllocThreadBufferWithTag @ 0x1C006EB30 (AllocThreadBufferWithTag.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ULongLongMult @ 0x1C00C01E8 (ULongLongMult.c)
 */

struct _DRIVER_INFO_2W *__fastcall CaptureDriverInfo2W(struct _DRIVER_INFO_2W *a1)
{
  struct _DRIVER_INFO_2W *v2; // rdx
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r15
  _BYTE *v6; // rax
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r10
  ULONGLONG v9; // rbx
  ULONGLONG v10; // rdx
  ULONGLONG v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r10
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r9
  __int64 v17; // r11
  size_t v18; // r13
  unsigned __int64 v19; // rdi
  _QWORD *v20; // rax
  _QWORD *v21; // rbx
  size_t v22; // r8
  void *v23; // rcx
  void *v24; // rcx
  __int64 v26; // [rsp+20h] [rbp-48h]
  ULONGLONG pullResult; // [rsp+70h] [rbp+8h] BYREF
  void *v28; // [rsp+78h] [rbp+10h]
  __int64 v29; // [rsp+80h] [rbp+18h]
  size_t Size; // [rsp+88h] [rbp+20h]

  v2 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v2 = (struct _DRIVER_INFO_2W *)W32UserProbeAddress;
  v3 = *((_QWORD *)a1 + 1);
  if ( !v3 )
    return 0LL;
  v4 = *((_QWORD *)a1 + 3);
  if ( !v4 )
    return 0LL;
  v5 = *((_QWORD *)a1 + 4);
  if ( !v5 )
    return 0LL;
  if ( (v3 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v6 = (_BYTE *)W32UserProbeAddress;
  if ( v3 + 2 > W32UserProbeAddress || v3 + 2 < v3 )
  {
    *(_BYTE *)W32UserProbeAddress = 0;
    v6 = (_BYTE *)W32UserProbeAddress;
  }
  if ( (v4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( v4 + 2 > (unsigned __int64)v6 || v4 + 2 < v4 )
    *v6 = 0;
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)(v3 + 2 * v7) );
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)(v4 + 2 * v8) );
  if ( v7 + 1 < v7 )
    return 0LL;
  v9 = v8 + 1;
  if ( v8 + 1 < v8 )
    return 0LL;
  if ( ULongLongMult(v7 + 1, (ULONGLONG)v2, &pullResult) < 0 )
    return 0LL;
  if ( ULongLongMult(v9, v10, &pullResult) < 0 )
    return 0LL;
  Size = 2 * v12;
  v15 = 2 * v12 + 50;
  if ( v15 < 0x30 )
    return 0LL;
  pullResult = 2 * v12 + 50;
  v26 = 2 * v13;
  if ( 2 * v13 + 2 * v12 + 52 < v15 )
    return 0LL;
  v29 = 2 * v13 + 2 * v12 + 52;
  if ( (v5 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( v5 + 2 > W32UserProbeAddress || v5 + 2 < v5 )
    *(_BYTE *)W32UserProbeAddress = 0;
  do
    ++v14;
  while ( *(_WORD *)(v5 + 2 * v14) );
  if ( v14 + 1 < v14 )
    return 0LL;
  pullResult = v14 + 1;
  if ( ULongLongMult(v14 + 1, v11, &pullResult) < 0 )
    return 0LL;
  v18 = 2 * v17;
  v19 = v16 + 2 * v17 + 2;
  if ( v19 < v16 )
    return 0LL;
  v29 = v16 + 2 * v17 + 2;
  if ( v19 < 0x30 || v19 > 0x2710000 )
    return 0LL;
  v28 = 0LL;
  v20 = (_QWORD *)AllocThreadBufferWithTag(v19, 1886221383LL, 0);
  v21 = v20;
  v28 = v20;
  if ( v20 )
    memset(v20, 0, (unsigned int)v19);
  if ( v21 )
  {
    *(_DWORD *)v21 = *(_DWORD *)a1;
    v21[5] = 0LL;
    v21[2] = 0LL;
    v21[1] = v21 + 6;
    v22 = Size;
    v21[3] = (char *)v21 + Size + 50;
    if ( v22 + v3 < v3 || v22 + v3 > W32UserProbeAddress )
      *(_BYTE *)W32UserProbeAddress = 0;
    memmove(v21 + 6, (const void *)v3, v22);
    v23 = (void *)v21[3];
    if ( v26 + v4 < v4 || v26 + v4 > W32UserProbeAddress )
      *(_BYTE *)W32UserProbeAddress = 0;
    memmove(v23, (const void *)v4, v26);
    v24 = (void *)(v26 + v21[3] + 2LL);
    v21[4] = v24;
    if ( v5 + v18 < v5 || v5 + v18 > W32UserProbeAddress )
      *(_BYTE *)W32UserProbeAddress = 0;
    memmove(v24, (const void *)v5, v18);
  }
  return (struct _DRIVER_INFO_2W *)v21;
}
