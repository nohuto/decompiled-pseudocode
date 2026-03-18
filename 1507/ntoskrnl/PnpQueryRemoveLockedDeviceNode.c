/*
 * XREFs of PnpQueryRemoveLockedDeviceNode @ 0x14058D9C4
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140536DF4 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     PipSetDevNodeState @ 0x1400CFB9C (PipSetDevNodeState.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     IopRemoveDevice @ 0x1405383EC (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x14058DA8C (PiIrpQueryRemoveDevice.c)
 */

__int64 __fastcall PnpQueryRemoveLockedDeviceNode(__int64 a1, int a2, _DWORD *a3, UNICODE_STRING *a4)
{
  struct _DEVICE_OBJECT *v8; // r14
  int v9; // eax
  unsigned int v10; // edi
  __int64 result; // rax

  switch ( *(_DWORD *)(a1 + 300) )
  {
    case 0x303:
    case 0x304:
    case 0x306:
    case 0x307:
    case 0x308:
      v8 = *(struct _DEVICE_OBJECT **)(a1 + 32);
      v9 = PiIrpQueryRemoveDevice(v8);
      v10 = v9;
      if ( v9 < 0 )
      {
        if ( a2 == 54 && v9 == -1073740537 )
        {
          PipSetDevNodeState(a1, 784);
          *(_DWORD *)(a1 + 704) |= 2u;
        }
        else
        {
          IopRemoveDevice(v8, 3);
          *a3 = 6;
          RtlCopyUnicodeString(a4, (PCUNICODE_STRING)(a1 + 40));
        }
      }
      else
      {
        PipSetDevNodeState(a1, 784);
        if ( a2 == 54 && (*(_DWORD *)(a1 + 704) & 2) != 0 )
          v10 = -1073740537;
      }
      result = v10;
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}
