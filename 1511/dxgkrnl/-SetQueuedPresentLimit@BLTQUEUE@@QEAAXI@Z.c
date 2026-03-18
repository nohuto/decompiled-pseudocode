/*
 * XREFs of ?SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z @ 0x1C015F060
 * Callers:
 *     ?SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C012F1F0 (-SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?Get@?$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z @ 0x1C001907C (-Get@-$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C00BF9D0 (-Flush@BLTQUEUE@@QEAAXXZ.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C015DF80 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 */

void __fastcall BLTQUEUE::SetQueuedPresentLimit(struct _LIST_ENTRY *this, unsigned int a2)
{
  struct BLTENTRY *v4; // rdi
  char *v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rsi

  BLTQUEUE::Flush((BLTQUEUE *)this);
  v4 = (struct BLTENTRY *)&this[43];
  this[2].Blink = this + 2;
  this[2].Flink = this + 2;
  v5 = CCachedData<BLTENTRY,3>::Get((__int64)&this[43], a2);
  if ( v5 )
  {
    if ( a2 )
    {
      v6 = a2;
      do
      {
        BLTQUEUE::InsertQueueTail((BLTQUEUE *)this, this + 2, (struct BLTENTRY *)v5);
        v5 += 560;
        --v6;
      }
      while ( v6 );
    }
  }
  else
  {
    v7 = 3LL;
    do
    {
      BLTQUEUE::InsertQueueTail((BLTQUEUE *)this, this + 2, v4);
      v4 = (struct BLTENTRY *)((char *)v4 + 560);
      --v7;
    }
    while ( v7 );
  }
}
