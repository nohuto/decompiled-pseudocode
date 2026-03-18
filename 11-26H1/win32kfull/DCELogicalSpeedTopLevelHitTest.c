/*
 * XREFs of DCELogicalSpeedTopLevelHitTest @ 0x14008D280
 * Callers:
 *     <none>
 * Callees:
 *     ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x14008C6E8 (-DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     IsWindowUnderActiveLockScreen @ 0x14008D414 (IsWindowUnderActiveLockScreen.c)
 */

struct tagWND *__fastcall DCELogicalSpeedTopLevelHitTest(struct tagPOINT *a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // rbx
  struct tagWND *i; // rbx
  __int64 v6; // rcx
  unsigned int v8; // ecx
  int v9; // eax
  __int64 v10; // rax
  struct tagPOINT v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct tagPOINT v14; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19176) + 8LL) + 24LL);
  if ( v4 )
  {
    for ( i = *(struct tagWND **)(v4 + 112); ; i = (struct tagWND *)*((_QWORD *)i + 11) )
    {
      if ( !i )
        return i;
      v6 = *((_QWORD *)i + 5);
      v14 = *a1;
      if ( (*(_BYTE *)(v6 + 31) & 0x10) != 0 )
      {
        v8 = *(unsigned __int8 *)(v6 + 233);
        v9 = (v8 >> 4) & 2 | 1;
        if ( (v8 & 0x40) == 0 )
          v9 = (v8 >> 4) & 2;
        if ( !v9 && !(unsigned int)IsWindowUnderActiveLockScreen(i) )
        {
          if ( (((unsigned __int16)(v2 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*((_QWORD *)i + 5) + 288LL) >> 8)) & 0x1FF) != 0 )
          {
            LogicalToPhysicalDPIPoint(&v14, &v14, v2, 0LL);
            PhysicalToLogicalDPIPoint(&v14, &v14, *(unsigned int *)(*((_QWORD *)i + 5) + 288LL), 0LL);
          }
          v10 = *((_QWORD *)i + 5);
          v11 = v14;
          if ( v14.x >= *(_DWORD *)(v10 + 88)
            && v14.x < *(_DWORD *)(v10 + 96)
            && v14.y >= *(_DWORD *)(v10 + 92)
            && v14.y < *(_DWORD *)(v10 + 100) )
          {
            v12 = *(_QWORD *)(v10 + 168);
            if ( v12 )
            {
              if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GrePtInRegion)(
                                    v12,
                                    v14,
                                    (unsigned int)v14.y) )
                continue;
              v11 = v14;
            }
            v13 = *((_QWORD *)i + 5);
            if ( (*(_BYTE *)(v13 + 26) & 8) == 0 || (*(_DWORD *)(v13 + 232) & 2) != 0 || DCELayerHitTest(i, v11) )
              return i;
          }
        }
      }
    }
  }
  return 0LL;
}
