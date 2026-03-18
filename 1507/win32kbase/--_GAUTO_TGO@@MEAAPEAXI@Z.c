/*
 * XREFs of ??_GAUTO_TGO@@MEAAPEAXI@Z @ 0x1C00B7A70
 * Callers:
 *     <none>
 * Callees:
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C001CA10 (--1AUTO_TGO@@MEAA@XZ.c)
 */

AUTO_TGO *__fastcall AUTO_TGO::`scalar deleting destructor'(AUTO_TGO *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  AUTO_TGO::~AUTO_TGO(this);
  if ( (a2 & 1) != 0 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v5);
  }
  return this;
}
