/*
 * XREFs of _lambda_8e519a2256dcdf5e4b624ad02749eac7_::operator() @ 0x1401A2938
 * Callers:
 *     _lambda_8e519a2256dcdf5e4b624ad02749eac7_::_lambda_invoker_cdecl_ @ 0x1401A2920 (_lambda_8e519a2256dcdf5e4b624ad02749eac7_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     SkipWindowOnMonitor @ 0x1401A0B80 (SkipWindowOnMonitor.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1401A36FC (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall lambda_8e519a2256dcdf5e4b624ad02749eac7_::operator()(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int128 v17; // [rsp+20h] [rbp-18h]

  *a3 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18936) )
  {
    UserSessionState = W32GetUserSessionState(v5, v4);
    if ( IsWindowActivateable(*(const struct tagWND **)(*(_QWORD *)(UserSessionState + 18936) + 136LL)) )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 18936) + 136LL) + 40LL);
      if ( (*(_BYTE *)(v11 + 20) & 0x20) == 0 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v10) + 18936) + 136LL) + 40LL);
        if ( (*(_BYTE *)(v13 + 31) & 0x20) == 0 )
        {
          v14 = W32GetUserSessionState(v13, v12);
          if ( !(unsigned int)SkipWindowOnMonitor(*(struct tagWND **)(*(_QWORD *)(v14 + 18936) + 136LL)) )
          {
            *((_QWORD *)&v17 + 1) = 4LL;
            *(_QWORD *)&v17 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v16, v15) + 18936) + 136LL);
            *a3 = v17;
          }
        }
      }
    }
  }
  return *(_QWORD *)a3 != 0LL;
}
