/*
 * XREFs of ndisMDeQueueWorkItem @ 0x1C000F614
 * Callers:
 *     ndisMCommonHaltMiniport @ 0x1C00E6698 (ndisMCommonHaltMiniport.c)
 *     ndisPmInitializeMiniport @ 0x1C00F5230 (ndisPmInitializeMiniport.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMDeQueueWorkItem(__int64 a1, int a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v4; // r11
  _QWORD *v6; // rcx
  int v7; // edx
  int v8; // edx

  v4 = a2;
  v6 = *(_QWORD **)(a1 + 8LL * a2 + 824);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 8LL * a2 + 824) = *v6;
    if ( a3 )
      *a3 = v6[2];
    if ( a4 )
      *a4 = v6[3];
    v7 = a2 - 3;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 2 )
        {
          ExFreePoolWithTag(v6, 0);
        }
        else
        {
          *v6 = *(_QWORD *)(a1 + 8 * v4 + 880);
          *(_QWORD *)(a1 + 8 * v4 + 880) = v6;
        }
      }
      else
      {
        *v6 = *(_QWORD *)(a1 + 904);
        *(_QWORD *)(a1 + 904) = v6;
      }
    }
    else
    {
      *((_DWORD *)v6 + 2) = 4;
      *v6 = *(_QWORD *)(a1 + 856);
      *(_QWORD *)(a1 + 856) = v6;
    }
  }
}
