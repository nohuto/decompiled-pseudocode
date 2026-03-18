/*
 * XREFs of RedistributeDeferredMsgsOnQueue @ 0x1C01CB388
 * Callers:
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00DB608 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C01CAD44 (-DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C01CADC4 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 */

void __fastcall RedistributeDeferredMsgsOnQueue(struct tagMLIST *a1)
{
  __int64 v1; // rdx
  struct tagMLIST *v2; // r10
  __int64 v3; // r11
  __int64 v4; // rdx

  v1 = *((_QWORD *)a1 + 3);
  v2 = a1;
  if ( v1 )
  {
    do
    {
      v3 = *(_QWORD *)(v1 + 8);
      if ( *(struct tagMLIST **)(*(_QWORD *)(v1 + 104) + 384LL) != v2 )
      {
        RemoveQMsgFromDeferList(v2, (struct tagQMSG *)v1);
        DeferMessage(*(struct tagMLIST **)(*(_QWORD *)(v4 + 104) + 384LL), (struct tagQMSG *)v4);
      }
      v1 = v3;
    }
    while ( v3 );
  }
}
