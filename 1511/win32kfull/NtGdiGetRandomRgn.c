/*
 * XREFs of NtGdiGetRandomRgn @ 0x1C007A720
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002DAD0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C007A940 (UserGetRedirectedWindowOrigin.c)
 */

__int64 __fastcall NtGdiGetRandomRgn(__int64 a1, HRGN a2, int a3)
{
  int v5; // r13d
  __int64 v6; // rax
  unsigned int v7; // esi
  bool v8; // zf
  __int64 v9; // r15
  int v10; // ebx
  int v11; // r12d
  __int64 v12; // rdi
  __int64 v14; // [rsp+28h] [rbp-69h] BYREF
  int v15; // [rsp+30h] [rbp-61h]
  int v16; // [rsp+34h] [rbp-5Dh]
  _QWORD v17[2]; // [rsp+38h] [rbp-59h] BYREF
  int v18; // [rsp+48h] [rbp-49h]
  struct _POINTL v19; // [rsp+50h] [rbp-41h] BYREF
  __int64 v20; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v21[32]; // [rsp+68h] [rbp-29h] BYREF
  __int64 v22; // [rsp+88h] [rbp-9h]
  int v23; // [rsp+90h] [rbp-1h]
  int v24; // [rsp+94h] [rbp+3h]
  HRGN v26; // [rsp+100h] [rbp+6Fh]
  __int64 v27; // [rsp+110h] [rbp+7Fh] BYREF

  v26 = a2;
  if ( a3 == 4 )
  {
    v5 = 1;
    UserEnterUserCritSecShared();
  }
  else
  {
    v5 = 0;
  }
  v15 = 0;
  LOBYTE(a2) = 1;
  v16 = 0;
  v6 = HmgLockEx(a1, a2, 0LL);
  v7 = -1;
  v14 = v6;
  if ( v6 )
  {
    v8 = (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v14) == 0;
    v6 = v14;
    if ( v8 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v14 + 12), 0xFFFFFFFF);
      v6 = 0LL;
      v14 = 0LL;
    }
  }
  v9 = 0LL;
  v10 = -1;
  v11 = 5;
  if ( !v6 )
  {
    EngSetLastError(6u);
    goto LABEL_21;
  }
  v22 = 0LL;
  v23 = 0;
  v24 = 0;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v21, (struct XDCOBJ *)&v14, 1);
  if ( (v21[24] & 1) == 0 )
  {
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v14);
    goto LABEL_24;
  }
  switch ( a3 )
  {
    case 1:
      v12 = *(_QWORD *)(v14 + 224);
      break;
    case 2:
      v12 = *(_QWORD *)(v14 + 232);
      break;
    case 3:
      v12 = *(_QWORD *)(v14 + 224);
      v9 = *(_QWORD *)(v14 + 232);
      if ( v12 )
      {
        if ( v9 )
          v11 = 1;
      }
      else
      {
        v12 = *(_QWORD *)(v14 + 232);
      }
      break;
    default:
      if ( (unsigned int)(a3 - 4) > 1 )
        goto LABEL_27;
      v12 = *(_QWORD *)(v14 + 1512);
      break;
  }
  if ( v12 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v17, v26, 0);
    if ( v17[0] )
    {
      v27 = v12;
      if ( v11 == 5 )
      {
        if ( RGNOBJAPI::bCopy((RGNOBJAPI *)v17, (struct RGNOBJ *)&v27)
          && (a3 != 4
           || (*(_DWORD *)(v14 + 36) & 0x4000) == 0
           || (unsigned int)UserGetRedirectedWindowOrigin(a1, &v19) && RGNOBJ::bOffset((RGNOBJ *)v17, &v19)) )
        {
          v10 = 1;
        }
      }
      else
      {
        v20 = v9;
        if ( RGNOBJAPI::iCombine((RGNOBJAPI *)v17, (struct RGNOBJ *)&v27, (struct RGNOBJ *)&v20, v11) )
          v10 = 1;
      }
    }
    if ( !v18 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)v17);
    if ( v17[0] )
      _InterlockedAdd((volatile signed __int32 *)(v17[0] + 12LL), 0xFFFFFFFF);
    goto LABEL_20;
  }
LABEL_27:
  v10 = 0;
LABEL_20:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
LABEL_21:
  if ( v14 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v14);
    _InterlockedAdd((volatile signed __int32 *)(v14 + 12), 0xFFFFFFFF);
  }
  v7 = v10;
LABEL_24:
  if ( v5 )
    UserLeaveUserCritSec();
  return v7;
}
