/*
 * XREFs of xxxRecreateSmallIcons @ 0x1C0229754
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00A7ADC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C00723B0 (IsToplevelWindowDesktopComposed.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     DestroyWindowSmIcon @ 0x1C008E0D8 (DestroyWindowSmIcon.c)
 *     DestroyClassSmIcon @ 0x1C008FD30 (DestroyClassSmIcon.c)
 *     ClassLock @ 0x1C009F300 (ClassLock.c)
 *     SendDwmIconChange @ 0x1C00AAFF0 (SendDwmIconChange.c)
 *     xxxCreateClassSmIcon @ 0x1C00AB5D8 (xxxCreateClassSmIcon.c)
 *     xxxCreateWindowSmIcon @ 0x1C011E944 (xxxCreateWindowSmIcon.c)
 *     ClassUnlock @ 0x1C01DEF3C (ClassUnlock.c)
 */

__int64 __fastcall xxxRecreateSmallIcons(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // edi
  __int64 Prop; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)DestroyClassSmIcon(*(_QWORD *)(a1 + 152))
    && (unsigned int)ClassLock(*(_QWORD *)(a1 + 152), (__int64)v12) )
  {
    xxxCreateClassSmIcon(*(_QWORD *)(a1 + 152), v2, v3, v4);
    ClassUnlock(*(struct tagCLS **)(a1 + 152), v12, v5, v6);
  }
  v7 = (*(unsigned __int8 *)(a1 + 47) >> 5) & 1;
  if ( (unsigned int)DestroyWindowSmIcon(a1) && !v7 )
  {
    Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 1358LL), 1LL);
    xxxCreateWindowSmIcon((_DWORD *)a1, Prop, v9, v10);
  }
  result = IsToplevelWindowDesktopComposed(a1);
  if ( (_DWORD)result )
    return SendDwmIconChange((struct tagWND *)a1);
  return result;
}
