/*
 * XREFs of NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C02B0750
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ReferenceW32Process @ 0x1C009E9F4 (ReferenceW32Process.c)
 *     ?FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z @ 0x1C0283DD4 (-FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C02841D4 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 */

void *__fastcall NtGdiFONTOBJ_pvTrueTypeFontFile(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // r14
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rsi
  void *v9; // rdi
  struct _FONTOBJ *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  void *v13; // rbx
  __int64 CurrentProcessWin32Process; // rax
  void *v15; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+60h] [rbp+18h] BYREF
  UMPDOBJ *v17; // [rsp+68h] [rbp+20h] BYREF

  v4 = (_DWORD *)a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v17, ThreadCurrentObj);
  if ( v17 )
  {
    v9 = 0LL;
    v10 = (struct _FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
    if ( v10 )
    {
      v16 = *((_DWORD *)ThreadCurrentObj + 94);
      v9 = (void *)*((_QWORD *)ThreadCurrentObj + 46);
      if ( !v9 )
      {
        v9 = FONTOBJ_pvTrueTypeFontFileUMPD(v10, &v16, &v15);
        if ( v9 )
        {
          v13 = v15;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12, v11);
          *((_QWORD *)ThreadCurrentObj + 48) = CurrentProcessWin32Process;
          ReferenceW32Process(CurrentProcessWin32Process);
          *((_QWORD *)ThreadCurrentObj + 46) = v9;
          *((_QWORD *)ThreadCurrentObj + 45) = v13;
          *((_DWORD *)ThreadCurrentObj + 94) = v16;
        }
      }
    }
    if ( v4 )
    {
      if ( (unsigned __int64)v4 >= W32UserProbeAddress )
        v4 = (_DWORD *)W32UserProbeAddress;
      *v4 = v9 != 0LL ? v16 : 0;
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v17);
    return v9;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v17);
    return 0LL;
  }
}
