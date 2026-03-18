/*
 * XREFs of rimProcessKeyboardInput @ 0x1C00C8EE0
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0086A90 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimStackAttachAndProcessInput @ 0x1C0086D80 (rimStackAttachAndProcessInput.c)
 */

void __fastcall rimProcessKeyboardInput(__int64 a1, __int64 a2)
{
  int v3; // eax

  if ( *(_QWORD *)(a1 + 808)
    && (v3 = *(_DWORD *)(a2 + 176), (v3 & 0x800) != 0)
    && (v3 & 0x8000) != 0
    && (v3 & 0x80000) == 0 )
  {
    if ( (v3 & 0x20000) == 0 )
    {
      *(_DWORD *)(a2 + 176) = v3 | 0x20000;
      ZwSetEvent(*(HANDLE *)(a1 + 512), 0LL);
    }
    *(_BYTE *)(a1 + 760) = 1;
  }
  else
  {
    rimStackAttachAndProcessInput(a1, a2, a2 + 436, a2 + 248, 0);
  }
}
