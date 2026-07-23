/*
 * XREFs of RtlCopyContext @ 0x14064CDA0
 * Callers:
 *     PspWow64SetContextThread @ 0x1404A4990 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1404A4C94 (PspWow64GetContextThread.c)
 * Callees:
 *     RtlpCopyLegacyContext @ 0x14002B31C (RtlpCopyLegacyContext.c)
 *     RtlpValidateContextFlags @ 0x14002B50C (RtlpValidateContextFlags.c)
 *     RtlpGetContextFlagsLocation @ 0x1400E1354 (RtlpGetContextFlagsLocation.c)
 *     RtlpCopyXStateChunk @ 0x1400E7F48 (RtlpCopyXStateChunk.c)
 */

NTSTATUS __cdecl RtlCopyContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT Source)
{
  _M128A *v6; // rdi
  _M128A *XmmRegisters; // rbp
  NTSTATUS result; // eax
  int v9; // r12d
  int v10; // esi
  ULONG v11; // esi
  __int64 v12; // rcx
  NTSTATUS v13; // ebx
  int v14; // [rsp+30h] [rbp-38h] BYREF
  int *ContextFlagsLocation; // [rsp+38h] [rbp-30h]
  int v16; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0LL;
  XmmRegisters = 0LL;
  result = RtlpValidateContextFlags(ContextFlags, 0LL);
  if ( result >= 0 )
  {
    ContextFlagsLocation = (int *)RtlpGetContextFlagsLocation((__int64)Context, ContextFlags);
    v9 = *ContextFlagsLocation;
    v10 = *(_DWORD *)RtlpGetContextFlagsLocation((__int64)Source, ContextFlags);
    result = RtlpValidateContextFlags(ContextFlags | v10 | v9, 0LL);
    if ( result >= 0 )
    {
      v11 = ContextFlags & v10;
      result = RtlpValidateContextFlags(v11, &v14);
      if ( result >= 0 )
      {
        result = RtlpValidateContextFlags(v9, &v16);
        v13 = result;
        if ( result >= 0 )
        {
          if ( (~v16 & v14) != 0 )
          {
            return -2147483643;
          }
          else
          {
            LOBYTE(v12) = 1;
            RtlpCopyLegacyContext(v12, (__int64)Context, v11);
            *ContextFlagsLocation |= v9;
            if ( (v16 & 0xFFFFFFFE) != 0 )
            {
              if ( (v11 & 0x10000) != 0 )
              {
                XmmRegisters = (_M128A *)((char *)&Source->1 + 460);
                v6 = (_M128A *)((char *)&Context->1 + 460);
                if ( (v9 & 0x10020) != 65568 && (v11 & 0x10020) == 65568 )
                  *((_DWORD *)&Context->1 + 118) = 716;
              }
              else if ( (ContextFlags & 0x100000) != 0 )
              {
                XmmRegisters = (_M128A *)&Source[1];
                v6 = (_M128A *)&Context[1];
              }
              else if ( (ContextFlags & 0x200000) != 0 )
              {
                XmmRegisters = Source->FltSave.XmmRegisters;
                v6 = Context->FltSave.XmmRegisters;
              }
              else if ( (ContextFlags & 0x400000) != 0 )
              {
                XmmRegisters = &Source->VectorRegister[9];
                v6 = &Context->VectorRegister[9];
              }
            }
            if ( (v14 & 2) == 0 )
              return v13;
            result = RtlpCopyXStateChunk(1, (__int64)v6, (__int64)v6, (__int64)XmmRegisters, (__int64)XmmRegisters);
            v13 = result;
            if ( result >= 0 )
              return v13;
          }
        }
      }
    }
  }
  return result;
}
