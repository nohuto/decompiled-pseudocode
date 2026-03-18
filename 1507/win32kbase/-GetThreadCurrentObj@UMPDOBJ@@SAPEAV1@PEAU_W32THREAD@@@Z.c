/*
 * XREFs of ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00AEF88
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C004A7B8 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C004AA70 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     GdiThreadCallout @ 0x1C005A6A0 (GdiThreadCallout.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00AF2A0 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

struct UMPDOBJ *__fastcall UMPDOBJ::GetThreadCurrentObj(struct _W32THREAD *a1)
{
  _QWORD *v1; // rax

  if ( !a1 )
    return 0LL;
  v1 = (_QWORD *)((char *)a1 + 40);
  if ( (_QWORD *)*v1 == v1 )
    return 0LL;
  else
    return (struct UMPDOBJ *)(*v1 - 40LL);
}
