/*
 * XREFs of xxxRecreateSmallIcons @ 0x1C022A494
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00804CC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00569D8 (IsToplevelWindowDesktopComposed.c)
 *     SendDwmIconChange @ 0x1C007ED30 (SendDwmIconChange.c)
 *     ClassLock @ 0x1C00F1844 (ClassLock.c)
 *     xxxCreateClassSmIcon @ 0x1C00F631C (xxxCreateClassSmIcon.c)
 *     DestroyWindowSmIcon @ 0x1C00F9404 (DestroyWindowSmIcon.c)
 *     xxxCreateWindowSmIcon @ 0x1C00FE3C0 (xxxCreateWindowSmIcon.c)
 *     DestroyClassSmIcon @ 0x1C011E1FC (DestroyClassSmIcon.c)
 *     ClassUnlock @ 0x1C01E86C4 (ClassUnlock.c)
 */

__int64 __fastcall xxxRecreateSmallIcons(__int64 a1)
{
  int v2; // edi
  __int64 Prop; // rax
  int v4; // r8d
  __int64 result; // rax
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)DestroyClassSmIcon(*(_QWORD *)(a1 + 152)) && (unsigned int)ClassLock(*(_QWORD *)(a1 + 152), v6) )
  {
    xxxCreateClassSmIcon(*(_QWORD *)(a1 + 152));
    ClassUnlock(*(struct tagCLS **)(a1 + 152), v6);
  }
  v2 = (*(unsigned __int8 *)(a1 + 47) >> 5) & 1;
  if ( (unsigned int)DestroyWindowSmIcon((_DWORD *)a1) && !v2 )
  {
    Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 1358LL), 1LL);
    xxxCreateWindowSmIcon((_DWORD *)a1, Prop, v4);
  }
  result = IsToplevelWindowDesktopComposed(a1);
  if ( (_DWORD)result )
    return SendDwmIconChange(a1);
  return result;
}
