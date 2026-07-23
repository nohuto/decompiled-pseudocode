/*
 * XREFs of VrpShouldOperateOnCall @ 0x140463650
 * Callers:
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     RegistryCallback @ 0x1404635D0 (RegistryCallback.c)
 * Callees:
 *     PspGetJobSilo @ 0x1400767A8 (PspGetJobSilo.c)
 *     PsGetPermanentSiloContext @ 0x140091640 (PsGetPermanentSiloContext.c)
 *     VRegEnabledInJob @ 0x1404CB334 (VRegEnabledInJob.c)
 */

__int64 __fastcall VrpShouldOperateOnCall(int a1, _QWORD *a2, _QWORD *a3, unsigned __int64 *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 JobSilo; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  struct _KTHREAD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  struct _KTHREAD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  v4 = 0;
  *a3 = 0LL;
  if ( a1 == 29 || a1 == 28 )
  {
LABEL_8:
    CurrentThread = KeGetCurrentThread();
    *a3 = 0LL;
    if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
      JobSilo = PspGetJobSilo(CurrentThread->Process[1].Affinity.Bitmap[16]);
    else
      JobSilo = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
    if ( !JobSilo || (int)PsGetPermanentSiloContext(JobSilo, gVregSiloContextSlot, a4) < 0 )
      return v4;
LABEL_7:
    v4 = 1;
    goto LABEL_54;
  }
  if ( a1 == 23 )
  {
LABEL_6:
    v7 = a2[5];
    *a3 = v7;
    if ( !v7 )
      return v4;
    goto LABEL_7;
  }
  if ( a1 != 8 )
  {
    switch ( a1 )
    {
      case 0:
      case 14:
      case 30:
        v15 = a2[2];
        *a3 = v15;
        if ( !v15 )
          return v4;
        v4 = 1;
        goto LABEL_54;
      case 1:
      case 5:
      case 6:
      case 7:
        v11 = a2[6];
        *a3 = v11;
        if ( !v11 )
          return v4;
        v4 = 1;
        goto LABEL_54;
      case 2:
      case 4:
        v18 = a2[3];
        *a3 = v18;
        if ( !v18 )
          return v4;
        v4 = 1;
        goto LABEL_54;
      case 3:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 21:
      case 24:
      case 25:
      case 31:
      case 33:
      case 36:
      case 37:
      case 38:
      case 39:
      case 42:
      case 44:
      case 46:
      case 47:
      case 48:
        goto LABEL_6;
      case 9:
        v19 = a2[7];
        *a3 = v19;
        if ( !v19 )
          return v4;
        v4 = 1;
        goto LABEL_54;
      case 20:
        *a3 = a2[5];
        v16 = KeGetCurrentThread();
        if ( *(_QWORD *)&v16[1].WaitBlockFill11[160] == -3LL )
          v17 = PspGetJobSilo(v16->Process[1].Affinity.Bitmap[16]);
        else
          v17 = *(_QWORD *)&v16[1].WaitBlockFill11[160];
        if ( v17 && (int)PsGetPermanentSiloContext(v17, gVregSiloContextSlot, a4) >= 0 && *a3 )
          goto LABEL_7;
        return v4;
      case 22:
        *a3 = a2[5];
        v13 = KeGetCurrentThread();
        if ( *(_QWORD *)&v13[1].WaitBlockFill11[160] == -3LL )
          v14 = PspGetJobSilo(v13->Process[1].Affinity.Bitmap[16]);
        else
          v14 = *(_QWORD *)&v13[1].WaitBlockFill11[160];
        if ( v14 && (int)PsGetPermanentSiloContext(v14, gVregSiloContextSlot, a4) >= 0 && *a3 )
          goto LABEL_7;
        return v4;
      case 26:
      case 27:
        goto LABEL_8;
      case 32:
        *a3 = 0LL;
        v4 = VRegEnabledInJob(a4);
        if ( v4 )
          goto LABEL_54;
        return v4;
      case 34:
        v20 = a2[3];
        goto LABEL_33;
      case 35:
        v20 = a2[5];
LABEL_33:
        *a3 = v20;
        if ( !(unsigned int)VRegEnabledInJob(a4) || !*a3 )
          return v4;
        goto LABEL_7;
      case 40:
        v22 = a2[1];
        *a3 = v22;
        if ( v22 )
          goto LABEL_7;
        return v4;
      case 41:
      case 43:
      case 45:
        v21 = a2[4];
        *a3 = v21;
        if ( v21 )
          goto LABEL_7;
        return v4;
      default:
        *a3 = 0LL;
        return v4;
    }
  }
  v12 = a2[7];
  *a3 = v12;
  if ( v12 )
  {
    v4 = 1;
LABEL_54:
    if ( !*a4 )
      VRegEnabledInJob(a4);
  }
  return v4;
}
