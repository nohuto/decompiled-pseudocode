/*
 * XREFs of NtGdiEngCheckAbort @ 0x1400F5950
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400F5E04 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     EngCheckAbort @ 0x1400F6640 (EngCheckAbort.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140114F5C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ?Cleanup@UMPDSURFOBJ@@SAXPEAX@Z @ 0x140295CA0 (-Cleanup@UMPDSURFOBJ@@SAXPEAX@Z.c)
 */

__int64 __fastcall NtGdiEngCheckAbort(struct _SURFOBJ *a1)
{
  struct _GRETHREAD *CurrentThread; // rax
  unsigned int v3; // ebx
  SURFOBJ *pso[3]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v6[40]; // [rsp+38h] [rbp-90h] BYREF
  UMPDOBJ *v7[4]; // [rsp+60h] [rbp-68h] BYREF
  struct UMPDOBJ *v8; // [rsp+80h] [rbp-48h]

  CurrentThread = GreGetCurrentThread((__int64)a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v7, CurrentThread);
  if ( v8 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, v8);
    if ( pso[0] )
      v3 = EngCheckAbort(pso[0]);
    else
      v3 = 1;
    CAutoTGO::vUnguard((CAutoTGO *)v6);
    UMPDSURFOBJ::Cleanup(pso);
    CAutoTGO::vUnguard((CAutoTGO *)v6);
  }
  else
  {
    v3 = 1;
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v7);
  return v3;
}
