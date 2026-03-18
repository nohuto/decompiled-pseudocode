/*
 * XREFs of ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C005C908
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C002ED98 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C002F030 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     GdiThreadCallout @ 0x1C005C7B0 (GdiThreadCallout.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00BD350 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

struct UMPDOBJ *__fastcall UMPDOBJ::GetThreadCurrentObj(struct _W32THREAD *a1)
{
  _QWORD *v1; // rax

  if ( a1 && (v1 = (_QWORD *)((char *)a1 + 40), (_QWORD *)*v1 != v1) )
    return (struct UMPDOBJ *)(*v1 - 40LL);
  else
    return 0LL;
}
