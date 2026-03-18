/*
 * XREFs of rimProcessMouseInput @ 0x1C0010280
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00103C4 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimStackAttachAndProcessInput @ 0x1C000FEEC (rimStackAttachAndProcessInput.c)
 */

void __fastcall rimProcessMouseInput(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // eax

  v2 = a2 + 256;
  if ( *(int *)(a2 + 256) >= 0 )
  {
    v5 = *(_QWORD *)(a2 + 264);
    if ( v5 - 24 <= 0xD8 )
    {
      v6 = (unsigned int)(v5 / 0x18) - 1;
      *(_OWORD *)(a2 + 716) = *(_OWORD *)(a2 + 24 * v6 + 476);
      *(_QWORD *)(a2 + 732) = *(_QWORD *)(a2 + 24 * v6 + 492);
    }
  }
  if ( *(_QWORD *)(a1 + 760)
    && (v7 = *(_DWORD *)(a2 + 184), (v7 & 0x800) != 0)
    && (v7 & 0x8000) != 0
    && (v7 & 0x80000) == 0 )
  {
    if ( (v7 & 0x20000) == 0 )
    {
      *(_DWORD *)(a2 + 184) = v7 | 0x20000;
      ZwSetEvent(*(HANDLE *)(a1 + 520), 0LL);
    }
    *(_BYTE *)(a1 + 712) = 1;
  }
  else
  {
    rimStackAttachAndProcessInput(a1, a2, a2 + 476, v2, 0);
  }
}
