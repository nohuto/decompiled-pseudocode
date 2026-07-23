/*
 * XREFs of VrpPostQueryKey @ 0x1406158DC
 * Callers:
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     RegistryCallback @ 0x1404635D0 (RegistryCallback.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     ExGetPreviousMode @ 0x140092240 (ExGetPreviousMode.c)
 *     EtwActivityIdControl @ 0x14009F51C (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     VrpCleanupBufferParameter @ 0x140612F4C (VrpCleanupBufferParameter.c)
 *     VrpOutputBufferParameter @ 0x140613098 (VrpOutputBufferParameter.c)
 *     VrpProcessBufferParameter @ 0x1406130C4 (VrpProcessBufferParameter.c)
 *     VrpUpdateKeyInformation @ 0x140616C78 (VrpUpdateKeyInformation.c)
 */

__int64 __fastcall VrpPostQueryKey(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  KPROCESSOR_MODE PreviousMode; // al
  int v5; // ebx
  unsigned __int16 *v6; // r13
  char v7; // di
  unsigned int v8; // eax
  int v9; // ecx
  unsigned __int16 *v10; // rcx
  int v11; // eax
  int updated; // eax
  int v13; // eax
  int v15; // eax
  __int64 v16; // rdx
  bool v17; // zf
  unsigned __int16 *v18; // rcx
  int v19; // [rsp+38h] [rbp-69h] BYREF
  __int64 v20; // [rsp+40h] [rbp-61h] BYREF
  void *v21; // [rsp+48h] [rbp-59h] BYREF
  void *v22; // [rsp+50h] [rbp-51h] BYREF
  GUID ActivityId; // [rsp+58h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-39h] BYREF
  __int64 *v25; // [rsp+88h] [rbp-19h]
  __int64 v26; // [rsp+90h] [rbp-11h]
  _QWORD *v27; // [rsp+98h] [rbp-9h]
  __int64 v28; // [rsp+A0h] [rbp-1h] BYREF
  __int64 *v29; // [rsp+A8h] [rbp+7h]
  _QWORD v30[3]; // [rsp+B0h] [rbp+Fh] BYREF

  v20 = a1;
  *(_QWORD *)&ActivityId.Data2 = 0LL;
  *(_DWORD *)&ActivityId.Data4[4] = 0;
  ActivityId.Data1 = 0;
  EtwActivityIdControl(3u, &ActivityId);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 16);
  v21 = 0LL;
  PreviousMode = ExGetPreviousMode();
  v5 = *(_DWORD *)(a1 + 8);
  v6 = (unsigned __int16 *)&EmptyUnicodeString;
  v22 = 0LL;
  v7 = PreviousMode;
  if ( v5 < 0 && v5 != -1073741789 && v5 != -2147483643 )
    goto LABEL_22;
  v8 = *(_DWORD *)(v3 + 8);
  if ( v8 > 8 )
    goto LABEL_22;
  v9 = 283;
  if ( !_bittest(&v9, v8) )
    goto LABEL_22;
  if ( stru_1402F3520.LevelPlus1 > 5 )
  {
    v10 = (unsigned __int16 *)(v2 + 16);
    v19 = *(_DWORD *)(v3 + 8);
    if ( !*(_QWORD *)(v2 + 24) )
      v10 = (unsigned __int16 *)&EmptyUnicodeString;
    v26 = 4LL;
    v25 = (__int64 *)&v19;
    v27 = v30;
    v29 = (__int64 *)*((_QWORD *)v10 + 1);
    v30[0] = *v10;
    v28 = 2LL;
    TlgWrite(&stru_1402F3520, &unk_14027B6F1, &ActivityId, 0LL, 5u, &pData);
  }
  if ( (*(_DWORD *)(v2 + 32) & 1) == 0 )
  {
    v11 = *(_DWORD *)(v3 + 8);
    if ( v11 != 3 && v11 != 8 )
    {
LABEL_22:
      if ( v5 >= 0 )
        goto LABEL_27;
      goto LABEL_23;
    }
  }
  v5 = VrpProcessBufferParameter(v7, *(_QWORD *)(v3 + 16), *(_DWORD *)(v3 + 24), &v21);
  if ( v5 >= 0 )
  {
    v5 = VrpOutputBufferParameter(v7, v21, *(_DWORD *)(v3 + 24), (const void **)(v3 + 16));
    if ( v5 >= 0 )
    {
      v5 = VrpProcessBufferParameter(v7, *(_QWORD *)(v3 + 32), 4u, &v22);
      if ( v5 >= 0 )
      {
        v5 = VrpOutputBufferParameter(v7, v22, 4u, (const void **)(v3 + 32));
        if ( v5 >= 0 )
        {
          updated = VrpUpdateKeyInformation(
                      *(unsigned int *)(v3 + 8),
                      v21,
                      *(unsigned int *)(v3 + 24),
                      v22,
                      v2 + 16,
                      *(_DWORD *)(v2 + 32));
          v5 = updated;
          if ( updated < 0 && updated != -2147483643 && updated != -1073741789 )
            goto LABEL_22;
          v13 = VrpOutputBufferParameter(v7, *(void **)(v3 + 16), *(_DWORD *)(v3 + 24), (const void **)&v21);
          if ( v13 < 0 )
          {
            v5 = v13;
            goto LABEL_22;
          }
          v15 = VrpOutputBufferParameter(v7, *(void **)(v3 + 32), 4u, (const void **)&v22);
          if ( v15 < 0 )
          {
            v5 = v15;
            goto LABEL_22;
          }
          v16 = v20;
          *(_DWORD *)(v20 + 24) = v5;
          v5 = -1073740541;
          if ( stru_1402F3520.LevelPlus1 > 5 )
          {
            v17 = *(_QWORD *)(v2 + 24) == 0LL;
            v18 = (unsigned __int16 *)&EmptyUnicodeString;
            v26 = 2LL;
            if ( !v17 )
              v18 = (unsigned __int16 *)(v2 + 16);
            HIDWORD(v28) = 0;
            v19 = *(_DWORD *)(v3 + 8);
            LODWORD(v20) = *(_DWORD *)(v16 + 24);
            v25 = &v28;
            v27 = (_QWORD *)*((_QWORD *)v18 + 1);
            LODWORD(v28) = *v18;
            v29 = (__int64 *)&v19;
            v30[1] = &v20;
            v30[0] = 4LL;
            v30[2] = 4LL;
            TlgWrite(&stru_1402F3520, &unk_14027B7E6, &ActivityId, 0LL, 6u, &pData);
            goto LABEL_22;
          }
        }
      }
    }
  }
LABEL_23:
  if ( stru_1402F3520.LevelPlus1 > 2 )
  {
    if ( *(_QWORD *)(v2 + 24) )
      v6 = (unsigned __int16 *)(v2 + 16);
    LODWORD(v20) = v5;
    v25 = &v28;
    v27 = (_QWORD *)*((_QWORD *)v6 + 1);
    v28 = *v6;
    v29 = &v20;
    v26 = 2LL;
    v30[0] = 4LL;
    TlgWrite(&stru_1402F3520, &unk_14027B66F, &ActivityId, 0LL, 5u, &pData);
  }
LABEL_27:
  VrpCleanupBufferParameter(v7, &v21);
  VrpCleanupBufferParameter(v7, &v22);
  return (unsigned int)v5;
}
