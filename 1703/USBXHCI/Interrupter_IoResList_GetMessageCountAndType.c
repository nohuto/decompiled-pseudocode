/*
 * XREFs of Interrupter_IoResList_GetMessageCountAndType @ 0x1C004E080
 * Callers:
 *     Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x1C004DE30 (Controller_WdfEvtDeviceFilterRemoveResourceRequirements.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall Interrupter_IoResList_GetMessageCountAndType(__int64 a1, unsigned int *a2, unsigned int *a3, char *a4)
{
  unsigned int v4; // r13d
  unsigned int v5; // r14d
  char v6; // r12
  __int64 v7; // r15
  unsigned int i; // esi
  unsigned int v9; // ebp
  __int64 v10; // rdi
  unsigned int v11; // ebx
  char v12; // r15
  __int64 v13; // rax
  char *result; // rax

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = a1;
  for ( i = 0;
        i < (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2320))(
              WdfDriverGlobals,
              v7);
        ++i )
  {
    v9 = 0;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2328))(
            WdfDriverGlobals,
            v7,
            i);
    v11 = 0;
    v12 = 0;
    while ( v11 < (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2384))(
                    WdfDriverGlobals,
                    v10) )
    {
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2392))(
              WdfDriverGlobals,
              v10,
              v11);
      if ( *(_BYTE *)(v13 + 1) == 2 && (*(_BYTE *)(v13 + 4) & 3) == 3 && (*(_BYTE *)v13 & 8) == 0 )
      {
        if ( v9 )
          v12 = 1;
        v9 += *(_DWORD *)(v13 + 12) - *(_DWORD *)(v13 + 8) + 1;
      }
      ++v11;
    }
    if ( v12 )
    {
      if ( !v6 || v9 > v5 )
      {
        v6 = 1;
LABEL_15:
        v4 = i;
        v5 = v9;
      }
    }
    else if ( !v6 && v9 > v5 )
    {
      goto LABEL_15;
    }
    v7 = a1;
  }
  *a2 = v4;
  *a3 = v5;
  result = a4;
  *a4 = v6;
  return result;
}
