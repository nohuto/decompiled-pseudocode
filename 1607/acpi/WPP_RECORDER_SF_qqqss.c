/*
 * XREFs of WPP_RECORDER_SF_qqqss @ 0x1C00437B8
 * Callers:
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C0048F10 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIIsPowerNodeInTransition @ 0x1C004AFC0 (ACPIIsPowerNodeInTransition.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C00903EC (ACPIBusIrpQueryBusRelations.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x1C00985E0 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C009A004 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // r14
  __int64 v11; // rdi
  __int64 v13; // rbp
  unsigned __int64 v15; // rsi
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r8
  const char *v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rdx
  const char *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  const char *v26; // rcx
  __int64 v27; // rbx
  int v29; // [rsp+20h] [rbp-98h]
  __int64 v30; // [rsp+80h] [rbp-38h]
  __int64 v31; // [rsp+88h] [rbp-30h]
  unsigned __int16 v33; // [rsp+D8h] [rbp+20h]

  v33 = a4;
  v10 = "NULL";
  v11 = (__int64)a10;
  v13 = (__int64)a9;
  v15 = (unsigned __int64)a3 >> 16;
  v16 = -1LL;
  v17 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v15 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v17, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v15 + 1) >= a2 )
  {
    if ( a10 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a10[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = "NULL";
    if ( a10 )
      v20 = a10;
    if ( a9 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a9[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = "NULL";
    if ( a9 )
      v23 = a9;
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v15),
      43LL,
      a5,
      v33,
      &a6,
      8LL,
      &a7,
      8LL,
      &a8,
      8LL,
      v23,
      v22,
      v20,
      v19,
      0LL);
    a4 = v33;
  }
  if ( v11 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( *(_BYTE *)(v11 + v24) );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5LL;
  }
  v26 = "NULL";
  if ( v11 )
    v26 = (const char *)v11;
  if ( v13 )
  {
    do
      ++v16;
    while ( *(_BYTE *)(v16 + v13) );
    v27 = v16 + 1;
  }
  else
  {
    v27 = 5LL;
  }
  if ( v13 )
    v10 = (const char *)v13;
  LOWORD(v29) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v29, &a6, 8LL, &a7, 8LL, &a8, 8LL, v10, v27, v26, v25, 0LL, v30, v31);
}
