/*
 * XREFs of ?UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01F9CB4
 * Callers:
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01FA180 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C000B25C (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01F9AE4 (-UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z.c)
 */

void __fastcall UpdateThreadPointerList(struct tagTHREADINPUTPOINTERLIST *a1, __int16 a2)
{
  struct tagTHREADINPUTPOINTERLIST *v2; // rdi
  struct _LIST_ENTRY *Blink; // rsi
  struct tagTHREADINPUTPOINTERLIST *v5; // rdx
  __int64 v6; // rcx

  if ( a2 != 1 )
  {
    v2 = *(struct tagTHREADINPUTPOINTERLIST **)a1;
    if ( *(struct tagTHREADINPUTPOINTERLIST **)a1 != a1 )
    {
      Blink = 0LL;
      if ( a2 )
        Blink = FindThreadPointerData((struct _LIST_ENTRY *)a1, a2)[1].Blink;
      do
      {
        v5 = v2;
        v2 = *(struct tagTHREADINPUTPOINTERLIST **)v2;
        v6 = *((_QWORD *)v5 + 3);
        if ( Blink == (struct _LIST_ENTRY *)v6 )
        {
          *((_DWORD *)v5 + 12) |= 2u;
        }
        else if ( (*((_DWORD *)v5 + 12) & 2) != 0
               && (!v6 || !Blink || *(_DWORD *)(v6 + 28) != HIDWORD(Blink[1].Blink))
               && (*(_QWORD *)v6 == *(_QWORD *)(v6 + 8) && *(_DWORD *)(*(_QWORD *)v6 - 76LL) == 3
                || (*(_DWORD *)(v6 + 36) & 0x10) != 0) )
        {
          UnlinkAndFreeThreadPointerData(a1, v5);
        }
      }
      while ( v2 != a1 );
    }
  }
}
