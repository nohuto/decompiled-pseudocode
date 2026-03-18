/*
 * XREFs of xxxRecreateSmallIcons @ 0x1C022A194
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00815D0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 * Callees:
 *     ClassLock @ 0x1C005BE7C (ClassLock.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0065EE4 (IsToplevelWindowDesktopComposed.c)
 *     xxxCreateWindowSmIcon @ 0x1C007D400 (xxxCreateWindowSmIcon.c)
 *     xxxCreateClassSmIcon @ 0x1C007D888 (xxxCreateClassSmIcon.c)
 *     SendDwmIconChange @ 0x1C007E14C (SendDwmIconChange.c)
 *     DestroyWindowSmIcon @ 0x1C0086174 (DestroyWindowSmIcon.c)
 *     DestroyClassSmIcon @ 0x1C00D91CC (DestroyClassSmIcon.c)
 *     ClassUnlock @ 0x1C0154834 (ClassUnlock.c)
 */

__int64 __fastcall xxxRecreateSmallIcons(__int64 a1)
{
  int v2; // edi
  __int64 Prop; // rax
  _DWORD *v4; // rcx
  int v5; // r8d
  __int64 result; // rax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)DestroyClassSmIcon(*(_QWORD *)(a1 + 152))
    && (unsigned int)ClassLock(*(_QWORD *)(a1 + 152), (__int64)v7) )
  {
    xxxCreateClassSmIcon(*(_QWORD *)(a1 + 152));
    ClassUnlock(*(struct tagCLS **)(a1 + 152), v7);
  }
  v2 = (*(unsigned __int8 *)(a1 + 47) >> 5) & 1;
  if ( (unsigned int)DestroyWindowSmIcon((_DWORD *)a1) && !v2 )
  {
    Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 1358LL), 1LL);
    xxxCreateWindowSmIcon(v4, Prop, v5);
  }
  result = IsToplevelWindowDesktopComposed(a1);
  if ( (_DWORD)result )
    return SendDwmIconChange(a1);
  return result;
}
