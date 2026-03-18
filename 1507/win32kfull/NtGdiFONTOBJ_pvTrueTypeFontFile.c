/*
 * XREFs of NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C02AEEF0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ReferenceW32Process @ 0x1C00E07F0 (ReferenceW32Process.c)
 *     ?FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z @ 0x1C0285C54 (-FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C028603C (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 */

void *__fastcall NtGdiFONTOBJ_pvTrueTypeFontFile(__int64 a1, _DWORD *a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v6; // rdi
  void *v8; // rsi
  struct _FONTOBJ *v9; // rax
  __int64 v10; // rcx
  void *v11; // rbx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v13; // [rsp+60h] [rbp+18h] BYREF
  void *v14; // [rsp+68h] [rbp+20h] BYREF

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  v8 = 0LL;
  v9 = (struct _FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v9 )
  {
    v13 = *((_DWORD *)v6 + 94);
    v8 = (void *)*((_QWORD *)v6 + 46);
    if ( !v8 )
    {
      v8 = FONTOBJ_pvTrueTypeFontFileUMPD(v9, &v13, &v14);
      if ( v8 )
      {
        v11 = v14;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
        *((_QWORD *)v6 + 48) = CurrentProcessWin32Process;
        ReferenceW32Process(CurrentProcessWin32Process);
        *((_QWORD *)v6 + 46) = v8;
        *((_QWORD *)v6 + 45) = v11;
        *((_DWORD *)v6 + 94) = v13;
      }
    }
  }
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_DWORD *)W32UserProbeAddress;
    *a2 = v8 != 0LL ? v13 : 0;
  }
  if ( v6 )
    --*((_DWORD *)v6 + 108);
  return v8;
}
