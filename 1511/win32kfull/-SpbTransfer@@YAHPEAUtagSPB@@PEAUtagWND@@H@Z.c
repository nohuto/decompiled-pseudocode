/*
 * XREFs of ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C000C0AC
 * Callers:
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C000C0AC (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     CreateSpb @ 0x1C010B97C (CreateSpb.c)
 * Callees:
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C0009824 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C000C0AC (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     IntersectWithParents @ 0x1C006A260 (IntersectWithParents.c)
 *     xxxInternalInvalidate @ 0x1C007D060 (xxxInternalInvalidate.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall SpbTransfer(struct tagSPB *a1, struct tagWND *a2, int a3)
{
  unsigned __int64 v4; // rcx
  __int64 i; // rbx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v10; // [rsp+28h] [rbp-20h] BYREF

  v4 = *((_QWORD *)a2 + 20);
  v10 = 0LL;
  if ( v4 )
  {
    if ( v4 <= 1 )
      v10 = (struct tagRECT)*((_OWORD *)a2 + 7);
    else
      GreGetRgnBox(v4, &v10);
    if ( (unsigned int)IntersectWithParents(a2, &v10) )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v9);
      xxxInternalInvalidate(a2, ghrgnSPB2, 0x48u);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v9);
      if ( !(unsigned int)SpbCheckRect2(a1, a2, &v10, 1u) )
        return 0LL;
    }
  }
  if ( a3 )
  {
    for ( i = *((_QWORD *)a2 + 12); i; i = *(_QWORD *)(i + 72) )
    {
      if ( !(unsigned int)SpbTransfer(a1, (struct tagWND *)i, 1) )
        return 0LL;
    }
  }
  return 1LL;
}
