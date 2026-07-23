/*
 * XREFs of RtlCopyContext @ 0x180070510
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetContextFlagsLocation @ 0x1800709A4 (RtlpGetContextFlagsLocation.c)
 *     RtlpValidateContextFlags @ 0x180070A00 (RtlpValidateContextFlags.c)
 *     RtlpCopyXStateChunk @ 0x180070A88 (RtlpCopyXStateChunk.c)
 *     RtlpCopyLegacyContext @ 0x180070B5C (RtlpCopyLegacyContext.c)
 */

NTSTATUS __cdecl RtlCopyContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT Source)
{
  int v6; // ebx
  M128A *XmmRegisters; // rbp
  NTSTATUS result; // eax
  unsigned int v9; // r12d
  int v10; // esi
  ULONG v11; // esi
  __int64 v12; // rcx
  NTSTATUS v13; // edi
  int v14; // ecx
  int v15; // [rsp+30h] [rbp-38h] BYREF
  unsigned int *ContextFlagsLocation; // [rsp+38h] [rbp-30h]
  int v17; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  XmmRegisters = 0LL;
  result = RtlpValidateContextFlags(ContextFlags, 0LL);
  if ( result >= 0 )
  {
    ContextFlagsLocation = (unsigned int *)RtlpGetContextFlagsLocation(Context, ContextFlags);
    v9 = *ContextFlagsLocation;
    v10 = *(_DWORD *)RtlpGetContextFlagsLocation(Source, ContextFlags);
    result = RtlpValidateContextFlags(ContextFlags | v10 | v9, 0LL);
    if ( result >= 0 )
    {
      v11 = ContextFlags & v10;
      result = RtlpValidateContextFlags(v11, &v15);
      if ( result >= 0 )
      {
        result = RtlpValidateContextFlags(v9, &v17);
        v13 = result;
        if ( result >= 0 )
        {
          if ( (~v17 & v15) != 0 )
          {
            return -2147483643;
          }
          else
          {
            RtlpCopyLegacyContext(v12, Context, v11, Source);
            *ContextFlagsLocation |= v9;
            if ( (v17 & 0xFFFFFFFE) != 0 )
            {
              if ( (v11 & 0x10000) != 0 )
              {
                XmmRegisters = (M128A *)((char *)&Source->1 + 460);
                v6 = (_DWORD)Context + 716;
                LOBYTE(v14) = (v9 & 0x10020) != 65568;
                if ( ((unsigned __int8)v14 & ((v11 & 0x10020) == 65568)) != 0 )
                  *((_DWORD *)&Context->1 + 118) = 716;
              }
              else if ( (ContextFlags & 0x100000) != 0 )
              {
                XmmRegisters = (M128A *)&Source[1];
                v6 = (_DWORD)Context + 1232;
              }
              else if ( (ContextFlags & 0x200000) != 0 )
              {
                XmmRegisters = Source->FltSave.XmmRegisters;
                v6 = (_DWORD)Context + 416;
              }
              else if ( (ContextFlags & 0x400000) != 0 )
              {
                XmmRegisters = &Source->VectorRegister[9];
                v6 = (_DWORD)Context + 912;
              }
            }
            if ( (v15 & 2) == 0 )
              return v13;
            result = RtlpCopyXStateChunk(v14, v6, v6, (_DWORD)XmmRegisters, (__int64)XmmRegisters);
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
