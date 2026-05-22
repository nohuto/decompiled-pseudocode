/*
 * XREFs of ?GetInfo@CraneGrabRecognizer@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x180039BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CraneGrabRecognizer::GetInfo(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v4; // edx
  unsigned int v5; // r9d
  int v6; // eax

  if ( *(_DWORD *)a3 != 28 || a2 != 13 )
    return 2147942487LL;
  *(_QWORD *)(a3 + 4) = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a1 + 48);
  v3 = *(_DWORD *)(a1 + 36);
  v4 = *(_DWORD *)(a1 + 32);
  if ( v3 < v4 )
  {
    v5 = *(unsigned __int16 *)(a1 + 54);
    if ( v3 > v5 )
      *(float *)(a3 + 16) = 1.0 - (float)((float)(int)(v3 - v5) / (float)(int)(v4 - v5));
    else
      *(_DWORD *)(a3 + 16) = 1065353216;
  }
  else
  {
    *(_DWORD *)(a3 + 16) = 0;
  }
  if ( *(_DWORD *)(a1 + 16) == 2 )
  {
    v6 = *(_DWORD *)(a1 + 24);
    if ( v6 == 0xFFFF )
      v6 = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a3 + 20) = v6;
  }
  else
  {
    *(_DWORD *)(a3 + 20) = 0xFFFF;
  }
  if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    *(_DWORD *)(a3 + 24) = 0;
  }
  else if ( *(_DWORD *)(a1 + 16) == 2 )
  {
    *(_DWORD *)(a3 + 24) = 1;
  }
  else
  {
    *(_DWORD *)(a3 + 24) = 2;
    *(_BYTE *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 16) = 0;
  }
  *(_BYTE *)(a1 + 20) = 0;
  return 0LL;
}
