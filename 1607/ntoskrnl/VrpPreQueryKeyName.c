/*
 * XREFs of VrpPreQueryKeyName @ 0x1406167BC
 * Callers:
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     RegistryCallback @ 0x1404635D0 (RegistryCallback.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     EtwActivityIdControl @ 0x14009F51C (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall VrpPreQueryKeyName(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int16 *v3; // rsi
  unsigned __int16 *v4; // rax
  int v5; // ecx
  __int64 v6; // rax
  unsigned int v7; // ecx
  unsigned int v8; // r14d
  void *v9; // r12
  __int64 v11; // [rsp+30h] [rbp-98h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-78h] BYREF
  int *v14; // [rsp+70h] [rbp-58h]
  __int64 v15; // [rsp+78h] [rbp-50h]
  __int64 v16; // [rsp+80h] [rbp-48h]
  int v17; // [rsp+88h] [rbp-40h] BYREF
  int v18; // [rsp+8Ch] [rbp-3Ch]
  __int64 *v19; // [rsp+90h] [rbp-38h]
  __int64 v20; // [rsp+98h] [rbp-30h]

  ActivityId.Data1 = 0;
  *(_QWORD *)&ActivityId.Data2 = 0LL;
  *(_DWORD *)&ActivityId.Data4[4] = 0;
  EtwActivityIdControl(3u, &ActivityId);
  v2 = *(_QWORD *)(a1 + 40);
  v11 = v2;
  v3 = (unsigned __int16 *)&EmptyUnicodeString;
  if ( stru_1402F3520.LevelPlus1 > 2 )
  {
    v4 = (unsigned __int16 *)(v2 + 16);
    if ( !*(_QWORD *)(v2 + 24) )
      v4 = (unsigned __int16 *)&EmptyUnicodeString;
    v5 = *v4;
    v6 = *((_QWORD *)v4 + 1);
    v14 = &v17;
    v15 = 2LL;
    v16 = v6;
    v17 = v5;
    v18 = 0;
    TlgWrite(&stru_1402F3520, &unk_14027B992, &ActivityId, 0LL, 4u, &pData);
  }
  v7 = *(unsigned __int16 *)(v2 + 16) + 18;
  **(_DWORD **)(a1 + 24) = v7;
  if ( *(_DWORD *)(a1 + 16) >= v7 )
  {
    v9 = (void *)(*(_QWORD *)(a1 + 8) + 16LL);
    memmove(v9, *(const void **)(v2 + 24), *(unsigned __int16 *)(v2 + 16));
    *((_WORD *)v9 + ((unsigned __int64)*(unsigned __int16 *)(v2 + 16) >> 1)) = 0;
    **(_WORD **)(a1 + 8) = *(_WORD *)(v2 + 16);
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL) = *(_WORD *)(v2 + 16);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = v9;
    v8 = -1073740541;
  }
  else
  {
    v8 = -1073741820;
  }
  if ( stru_1402F3520.LevelPlus1 > 5 )
  {
    if ( *(_QWORD *)(v2 + 24) )
      v3 = (unsigned __int16 *)(v2 + 16);
    v14 = &v17;
    v16 = *((_QWORD *)v3 + 1);
    v17 = *v3;
    v20 = 4LL;
    v19 = &v11;
    v18 = 0;
    v15 = 2LL;
    LODWORD(v11) = v8;
    TlgWrite(&stru_1402F3520, &unk_14027B8A9, &ActivityId, 0LL, 5u, &pData);
  }
  return v8;
}
