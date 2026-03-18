/*
 * XREFs of NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C02AE1A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z @ 0x1C0285FA4 (-FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C028638C (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 */

void *__fastcall NtGdiFONTOBJ_pvTrueTypeFontFile(__int64 a1, _DWORD *a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v6; // rdi
  void *v8; // rsi
  struct _FONTOBJ *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rbx
  unsigned int v15; // [rsp+60h] [rbp+18h] BYREF
  void *v16; // [rsp+68h] [rbp+20h] BYREF

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
    v15 = *((_DWORD *)v6 + 94);
    v8 = (void *)*((_QWORD *)v6 + 46);
    if ( !v8 )
    {
      v8 = FONTOBJ_pvTrueTypeFontFileUMPD(v9, &v15, &v16);
      if ( v8 )
      {
        v14 = v16;
        *((_QWORD *)v6 + 48) = PsGetCurrentProcess(v11, v10, v12, v13);
        *((_QWORD *)v6 + 46) = v8;
        *((_QWORD *)v6 + 45) = v14;
        *((_DWORD *)v6 + 94) = v15;
      }
    }
  }
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_DWORD *)W32UserProbeAddress;
    *a2 = v8 != 0LL ? v15 : 0;
  }
  if ( v6 )
    --*((_DWORD *)v6 + 108);
  return v8;
}
