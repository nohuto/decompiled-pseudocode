/*
 * XREFs of ObpGrantAccess @ 0x140405778
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x140405EE0 (ObpInsertOrLocateNamedObject.c)
 *     ObDuplicateObject @ 0x14050CBB0 (ObDuplicateObject.c)
 * Callees:
 *     ObpAdjustCreatorAccessState @ 0x140404050 (ObpAdjustCreatorAccessState.c)
 *     ObCheckObjectAccess @ 0x140405810 (ObCheckObjectAccess.c)
 */

__int64 __fastcall ObpGrantAccess(
        int a1,
        char *a2,
        struct _ACCESS_STATE *a3,
        KPROCESSOR_MODE a4,
        NTSTATUS a5,
        ACCESS_MASK *a6)
{
  unsigned __int64 v8; // r11
  unsigned __int64 v10; // r11
  __int64 result; // rax

  v8 = (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8);
  v10 = (unsigned __int8)ObHeaderCookie ^ v8;
  if ( (a5 & 0x400) != 0 )
    a4 = 1;
  if ( (unsigned int)(a1 - 1) <= 1 )
  {
    if ( !(unsigned __int8)ObCheckObjectAccess(a2, a3, &a5) )
      return (unsigned int)a5;
    goto LABEL_6;
  }
  result = ObpAdjustCreatorAccessState(a3, a4, ObTypeIndexTable[v10], (__int64)a2);
  if ( (int)result >= 0 )
  {
LABEL_6:
    *a6 = a3->PreviouslyGrantedAccess;
    return 0LL;
  }
  return result;
}
