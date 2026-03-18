/*
 * XREFs of ObpGrantAccess @ 0x1404D3D28
 * Callers:
 *     ObDuplicateObject @ 0x1404243A0 (ObDuplicateObject.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404D0FD4 (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     ObpAdjustCreatorAccessState @ 0x1404D0C60 (ObpAdjustCreatorAccessState.c)
 *     ObCheckObjectAccess @ 0x1404D3DC0 (ObCheckObjectAccess.c)
 */

__int64 __fastcall ObpGrantAccess(
        int a1,
        char *a2,
        struct _ACCESS_STATE *a3,
        unsigned __int8 a4,
        NTSTATUS a5,
        ACCESS_MASK *a6)
{
  unsigned __int64 v8; // r11
  __int64 v9; // rdx
  unsigned __int64 v10; // r11
  __int64 result; // rax

  v8 = (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8);
  v9 = a4;
  v10 = (unsigned __int8)ObHeaderCookie ^ v8;
  if ( (a5 & 0x400) != 0 )
    v9 = 1LL;
  if ( (unsigned int)(a1 - 1) > 1 )
  {
    result = ObpAdjustCreatorAccessState(a3, v9, ObTypeIndexTable[v10], (__int64)a2);
    if ( (int)result >= 0 )
      goto LABEL_5;
  }
  else
  {
    if ( (unsigned __int8)ObCheckObjectAccess(a2, a3, &a5) )
    {
LABEL_5:
      *a6 = a3->PreviouslyGrantedAccess;
      return 0LL;
    }
    return (unsigned int)a5;
  }
  return result;
}
