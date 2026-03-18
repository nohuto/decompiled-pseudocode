/*
 * XREFs of ?CrossedTPDragThreshold@@YAHPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@UtagPOINT@@@Z @ 0x1C01F113C
 * Callers:
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01F3264 (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 * Callees:
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 */

_BOOL8 __fastcall CrossedTPDragThreshold(struct tagTPCONTACTSTATE *a1, struct tagTPSTATE *a2, struct tagPOINT a3)
{
  char *v4; // rcx

  if ( (dword_1C0321F50 & 0x40) == 0 )
    goto LABEL_8;
  if ( (*((_DWORD *)a1 + 53) & 0x100000) == 0 )
    return 0LL;
  if ( *((_DWORD *)a1 + 1) >= *((_DWORD *)a2 + 377) )
  {
    v4 = (char *)a1 + 196;
  }
  else
  {
LABEL_8:
    if ( (dword_1C0321F50 & 0x10) != 0 && (*((_DWORD *)a1 + 53) & 0x80000) != 0 )
    {
      v4 = (char *)a1 + 180;
    }
    else
    {
      if ( (dword_1C0321F50 & 1) == 0 )
        return (unsigned int)dword_1C0321F14
             * (__int64)(int)((HIDWORD(*(_QWORD *)a1) - a3.y) * (HIDWORD(*(_QWORD *)a1) - a3.y))
             + (unsigned __int64)(unsigned int)dword_1C0321F18 * (int)((*(_QWORD *)a1 - a3.x) * (*(_QWORD *)a1 - a3.x)) > (unsigned int)dword_1C0321F14 * (unsigned __int64)(unsigned int)dword_1C0321F18;
      v4 = (char *)a1 + 164;
    }
  }
  return !PtInRect(v4, *(_QWORD *)&a3);
}
