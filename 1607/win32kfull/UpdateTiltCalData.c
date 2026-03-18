/*
 * XREFs of UpdateTiltCalData @ 0x1C01C3974
 * Callers:
 *     _SetCalibrationData @ 0x1C01CCCF0 (_SetCalibrationData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdateTiltCalData(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  unsigned int v5; // ebx
  int v8; // ebp
  __int64 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx

  v5 = 0;
  v8 = a2;
  if ( !*(_QWORD *)(a1 + 312) )
    *(_QWORD *)(a1 + 312) = Win32AllocPoolZInit(88LL, 2020635477LL);
  v10 = *(__int64 **)(a1 + 312);
  if ( v10 )
  {
    if ( a4 <= 0 )
      return 1;
    if ( a4 <= 2 )
    {
      v12 = *v10;
      if ( v12 )
        Win32FreePool(v12, a2, a3);
      **(_QWORD **)(a1 + 312) = a3;
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 8LL) = v8;
      return 1;
    }
    if ( a4 != 3 )
      return 1;
    switch ( *(_DWORD *)(a1 + 692) )
    {
      case 1:
        v11 = v10[2];
        v10[2] = a3;
        *((_DWORD *)v10 + 6) = v8;
        *a5 = 0;
        break;
      case 2:
        v11 = v10[4];
        v10[4] = a3;
        *((_DWORD *)v10 + 10) = v8;
        *a5 = 1;
        break;
      case 3:
        v11 = v10[6];
        v10[6] = a3;
        *((_DWORD *)v10 + 14) = v8;
        *a5 = 2;
        break;
      case 4:
        v11 = v10[8];
        v10[8] = a3;
        *((_DWORD *)v10 + 18) = v8;
        *a5 = 3;
        break;
      default:
        return 1;
    }
    v10[10] = a3;
    if ( v11 )
      Win32FreePool(v11, v11, a3);
    return 1;
  }
  return v5;
}
