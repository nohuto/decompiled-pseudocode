/*
 * XREFs of PnpFindAlternateStringData @ 0x1404C5250
 * Callers:
 *     PiGetDeviceRegProperty @ 0x1404DC820 (PiGetDeviceRegProperty.c)
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 *     PiGetDeviceRegistryProperty @ 0x14062A61C (PiGetDeviceRegistryProperty.c)
 *     PiAuditDeviceOperation @ 0x14064C804 (PiAuditDeviceOperation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpFindAlternateStringData(_WORD *a1, unsigned int a2, _QWORD *a3, _DWORD *a4)
{
  int v6; // r10d
  int v7; // ebx
  _WORD *v8; // r9
  __int16 *v9; // rcx
  _WORD *i; // rdx
  __int16 v11; // ax
  __int64 result; // rax
  _WORD *v13; // rcx

  v6 = (int)a1;
  if ( a2 > 2 && *a1 == 64 )
  {
    v7 = 0;
    v8 = &a1[(unsigned __int64)a2 >> 1];
    v9 = a1 + 1;
    for ( i = v9 + 1; i < v8; ++i )
    {
      v11 = *v9;
      if ( !*v9 )
        break;
      if ( v11 == 44 )
      {
        if ( ((*i - 35) & 0xFFF5) != 0 || *i == 43 )
          return 0LL;
        v7 = 1;
      }
      else if ( v11 == 59 )
      {
        if ( !v7 )
          return 0LL;
        v13 = v9 + 1;
        result = 1LL;
        *a3 = v13;
        *a4 = a2 + v6 - (_DWORD)v13;
        return result;
      }
      ++v9;
    }
  }
  return 0LL;
}
