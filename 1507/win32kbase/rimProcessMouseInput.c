/*
 * XREFs of rimProcessMouseInput @ 0x1C006EFA0
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C006EE0C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimStackAttachAndProcessInput @ 0x1C006F030 (rimStackAttachAndProcessInput.c)
 */

NTSTATUS __fastcall rimProcessMouseInput(__int64 a1, __int64 a2)
{
  int v2; // r9d
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  NTSTATUS result; // eax

  v2 = a2 + 256;
  if ( *(int *)(a2 + 256) >= 0 )
  {
    v5 = *(_QWORD *)(a2 + 264);
    if ( v5 - 24 <= 0xD8 )
    {
      v6 = (unsigned int)(v5 / 0x18) - 1;
      *(_OWORD *)(a2 + 652) = *(_OWORD *)(a2 + 24 * v6 + 412);
      *(_QWORD *)(a2 + 668) = *(_QWORD *)(a2 + 24 * v6 + 428);
    }
  }
  if ( !*(_QWORD *)(a1 + 760) )
    return rimStackAttachAndProcessInput(a1, a2, (int)a2 + 412, v2, 0);
  result = *(_DWORD *)(a2 + 184);
  if ( (result & 0x800) == 0 || (result & 0x8000) == 0 || (result & 0x80000) != 0 )
    return rimStackAttachAndProcessInput(a1, a2, (int)a2 + 412, v2, 0);
  if ( (result & 0x20000) == 0 )
  {
    *(_DWORD *)(a2 + 184) = result | 0x20000;
    result = ZwSetEvent(*(HANDLE *)(a1 + 480), 0LL);
  }
  *(_BYTE *)(a1 + 728) = 1;
  return result;
}
