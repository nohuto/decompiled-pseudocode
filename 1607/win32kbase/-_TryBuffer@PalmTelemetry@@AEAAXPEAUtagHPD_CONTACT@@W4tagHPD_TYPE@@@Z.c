/*
 * XREFs of ?_TryBuffer@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z @ 0x1C00E1A88
 * Callers:
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C00E150C (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 *     ?_BufferPenPacket@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z @ 0x1C00E1658 (-_BufferPenPacket@PalmTelemetry@@AEAAXPEAUtagHPD_CONTACT@@W4tagHPD_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PalmTelemetry::_TryBuffer(_DWORD *a1, _DWORD *a2, int a3)
{
  int v3; // r10d
  int v6; // ecx
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx

  v3 = a1[3];
  v6 = a1[6];
  result = (unsigned int)(-1713954085 * (v6 + v3));
  v8 = (v6 + v3) % 0x1AAu;
  if ( v3 == 426 )
  {
    if ( *a1 )
      return result;
    a1[6] = (v6 + 1) % 0x1AAu;
  }
  else
  {
    ++v3;
  }
  v9 = 3 * v8;
  a1[2 * v9 + 521] = a2[601];
  a1[6 * v8 + 522] = a2[2];
  a1[2 * v9 + 525] = a2[614];
  a1[2 * v9 + 523] = a2[612];
  result = (unsigned int)a2[613];
  a1[2 * v9 + 524] = result;
  a1[2 * v9 + 520] = a3;
  a1[3] = v3;
  return result;
}
