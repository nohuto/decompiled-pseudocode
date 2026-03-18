/*
 * XREFs of zzzAttachThreadInput @ 0x1C00DC6D4
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C000A1E0 (xxxSetModernAppWindow.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C00DAF30 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     NtUserAttachThreadInput @ 0x1C00DB870 (NtUserAttachThreadInput.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01D82EC (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01D8950 (TryDetachShellFrame.c)
 * Callees:
 *     zzzReattachThreads @ 0x1C00DB9C8 (zzzReattachThreads.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01CAF0C (ExemptedFromImmersiveRestrictions.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzAttachThreadInput(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  BOOL v6; // r14d
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 *i; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 *v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 *v25; // rdx
  int v26; // eax

  v3 = a3 & 1;
  v6 = (a3 & 0x4000) != 0 && (a3 & 1) == 0;
  if ( a1 != a2 )
  {
    if ( (a3 & 0x8000) == 0 )
    {
      v7 = *(_QWORD *)(a2 + 376);
      if ( v7 != *(_QWORD *)(a1 + 376) || *(_QWORD *)(gptiCurrent + 376LL) != v7 )
      {
        v8 = *(_QWORD *)(a2 + 384);
        v9 = *(_QWORD *)(gptiCurrent + 376LL);
        v10 = *(_QWORD *)(v8 + 380);
        v11 = *(_QWORD *)(v9 + 824);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v11 <= (unsigned int)v10 )
          {
            if ( (_DWORD)v11 != (_DWORD)v10
              || (v10 >>= 32, HIDWORD(v11) != (_DWORD)v10) && HIDWORD(v11) != -1 && (_DWORD)v10 != -1 )
            {
              if ( (*(_DWORD *)(v9 + 12) & 0x80000000) == 0 )
              {
                v20 = a2;
LABEL_35:
                EtwTraceUIPIInputError(gptiCurrent, v20, v8, *(_QWORD *)(v8 + 380), 2);
                return 3221225506LL;
              }
            }
          }
        }
        v8 = *(_QWORD *)(a1 + 384);
        v12 = *(_QWORD *)(v8 + 380);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v11 <= (unsigned int)v12 )
          {
            if ( (_DWORD)v11 != (_DWORD)v12
              || (v13 = HIDWORD(v11), v14 = HIDWORD(v12), (_DWORD)v13 != (_DWORD)v14)
              && (_DWORD)v14 != -1
              && (_DWORD)v13 != -1 )
            {
              if ( (*(_DWORD *)(v9 + 12) & 0x80000000) == 0 )
              {
LABEL_68:
                v20 = a1;
                goto LABEL_35;
              }
            }
          }
        }
        if ( (unsigned int)IsDesktopApp(*(_QWORD *)(gptiCurrent + 376LL), v10, v8, v9)
          && ((unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a2 + 376))
           || (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a1 + 376)))
          && !(unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent)
          && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 768LL) & 0x100) == 0 )
        {
          v8 = *(_QWORD *)(a1 + 384);
          goto LABEL_68;
        }
      }
    }
    if ( (*(_DWORD *)(a2 + 440) & 0x40) != 0
      || (*(_DWORD *)(a1 + 440) & 0x40) != 0
      || *(_QWORD *)(a2 + 408) != *(_QWORD *)(a1 + 408) )
    {
      return 3221225506LL;
    }
    if ( v3 )
    {
      for ( i = (__int64 *)gpai; ; i = (__int64 *)*i )
      {
        if ( !i )
        {
          v16 = Win32AllocPool(32LL, 1767994197LL);
          if ( v16 )
          {
            *(_QWORD *)(v16 + 8) = a1;
            *(_QWORD *)(v16 + 16) = a2;
            *(_DWORD *)(v16 + 24) = 1;
            *(_QWORD *)v16 = gpai;
            gpai = v16;
            goto LABEL_23;
          }
          return 3221225495LL;
        }
        v21 = i[2];
        if ( v21 == a2 && i[1] == a1 )
          break;
        if ( v21 == a1 && i[1] == a2 )
          break;
      }
      v26 = *((_DWORD *)i + 6);
      if ( v26 == -1 )
        return 3221225485LL;
      *((_DWORD *)i + 6) = v26 + 1;
      return 0LL;
    }
    v22 = (__int64 *)gpai;
    if ( gpai )
    {
      while ( 1 )
      {
        v23 = (__int64 *)*v22;
        v24 = *(_QWORD *)(*v22 + 16);
        if ( v24 == a2 && v23[1] == a1 )
          break;
        if ( v24 == a1 && v23[1] == a2 )
          break;
        v22 = (__int64 *)*v22;
        if ( !*v23 )
          return 3221225485LL;
      }
      --*((_DWORD *)v23 + 6);
      v25 = (__int64 *)*v22;
      if ( !*(_DWORD *)(*v22 + 24) || v6 )
      {
        *v22 = *v25;
        Win32FreePool(v25, v25, a3);
LABEL_23:
        *(_DWORD *)(a2 + 1096) |= 0x200u;
        v17 = *(_DWORD *)(a1 + 1096) | 0x200;
        *(_DWORD *)(a1 + 1096) = v17;
        if ( (v17 & 0x400) != 0 )
          KeSetEvent(*(PRKEVENT *)(a1 + 648), 1, 0);
        if ( (*(_DWORD *)(a2 + 1096) & 0x400) != 0 )
          KeSetEvent(*(PRKEVENT *)(a2 + 648), 1, 0);
        v18 = *(_QWORD *)(gptiCurrent + 416LL);
        if ( !*(_QWORD *)(v18 + 40) && !*(_QWORD *)(v18 + 48) )
          zzzReattachThreads(0, (const struct tagTHREADINFO *)a1, (const struct tagTHREADINFO *)a2);
      }
      return 0LL;
    }
  }
  return 3221225485LL;
}
