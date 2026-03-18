/*
 * XREFs of xxxMNButtonUp @ 0x1402375A8
 * Callers:
 *     xxxHandleMenuMessages @ 0x14005B450 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxMNCancel @ 0x14011F744 (xxxMNCancel.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1402376D0 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNOpenHierarchy @ 0x14024D400 (xxxMNOpenHierarchy.c)
 */

__int64 __fastcall xxxMNButtonUp(__int64 *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax
  bool v7; // zf
  _DWORD *v8; // rcx
  _QWORD *v9; // r8

  result = *(unsigned int *)(a2 + 8);
  if ( (result & 8) != 0 )
  {
    if ( a3 != -1 )
    {
      result = *a1;
      if ( *(_DWORD *)(*(_QWORD *)*a1 + 80LL) == a3 )
      {
        v7 = (**(_DWORD **)*a1 & 1) == 0;
        v8 = *(_DWORD **)*a1;
        if ( !v7 )
        {
          if ( (*v8 & 0x20) != 0 )
          {
            result = **(unsigned int **)*a1;
            if ( (result & 0x80u) != 0LL )
            {
              **(_DWORD **)*a1 &= ~0x80u;
              return (__int64)xxxMNCancel(a2, 0, 0, 0LL);
            }
            goto LABEL_10;
          }
LABEL_12:
          result = *a1;
          if ( *(_DWORD *)(*(_QWORD *)*a1 + 80LL) != -1 )
          {
            result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL) + 44LL);
            if ( *(_DWORD *)(*(_QWORD *)*a1 + 80LL) < (unsigned int)result )
            {
              result = *(int *)(*(_QWORD *)*a1 + 80LL);
              v9 = (_QWORD *)(96 * result + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 88LL));
              if ( (*(_DWORD *)*v9 & 0x800) == 0 )
              {
                result = *(unsigned int *)(*v9 + 4LL);
                if ( (result & 3) == 0 && !v9[2] )
                  return xxxMNDismissWithNotify(a2, (_DWORD)a1, (_DWORD)v9, *(_DWORD *)(*(_QWORD *)*a1 + 80LL), a4);
              }
            }
          }
          goto LABEL_10;
        }
        if ( (*v8 & 0x2000) == 0 )
          goto LABEL_12;
        **(_DWORD **)*a1 &= ~0x80u;
        result = xxxMNOpenHierarchy(a1, a2);
      }
    }
LABEL_10:
    *(_DWORD *)(a2 + 8) &= 0xFFFFFFB7;
  }
  return result;
}
