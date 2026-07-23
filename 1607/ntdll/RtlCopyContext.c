/*
 * XREFs of RtlCopyContext @ 0x18008B9E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetContextFlagsLocation @ 0x1800765B4 (RtlpGetContextFlagsLocation.c)
 *     RtlpValidateContextFlags @ 0x180076610 (RtlpValidateContextFlags.c)
 *     RtlpCopyXStateChunk @ 0x18008BB34 (RtlpCopyXStateChunk.c)
 *     RtlpCopyLegacyContext @ 0x18008BC08 (RtlpCopyLegacyContext.c)
 */

NTSTATUS __cdecl RtlCopyContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT Source)
{
  int v6; // ebx
  M128A *XmmRegisters; // rbp
  NTSTATUS result; // eax
  int v9; // r12d
  int v10; // edx
  int v11; // esi
  ULONG v12; // esi
  __int64 v13; // rcx
  NTSTATUS v14; // edi
  int v15; // ecx
  int v16; // [rsp+30h] [rbp-38h] BYREF
  int *ContextFlagsLocation; // [rsp+38h] [rbp-30h]
  int v18; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  XmmRegisters = 0LL;
  result = RtlpValidateContextFlags(ContextFlags, 0LL);
  if ( result >= 0 )
  {
    ContextFlagsLocation = (int *)RtlpGetContextFlagsLocation((__int64)Context, ContextFlags);
    v9 = *ContextFlagsLocation;
    v11 = *(_DWORD *)RtlpGetContextFlagsLocation((__int64)Source, v10);
    result = RtlpValidateContextFlags(ContextFlags | v11 | v9, 0LL);
    if ( result >= 0 )
    {
      v12 = ContextFlags & v11;
      result = RtlpValidateContextFlags(v12, &v16);
      if ( result >= 0 )
      {
        result = RtlpValidateContextFlags(v9, &v18);
        v14 = result;
        if ( result >= 0 )
        {
          if ( (~v18 & v16) != 0 )
          {
            return -2147483643;
          }
          else
          {
            RtlpCopyLegacyContext(v13, Context, v12, Source);
            *ContextFlagsLocation |= v9;
            if ( (v18 & 0xFFFFFFFE) != 0 )
            {
              if ( (v12 & 0x10000) != 0 )
              {
                XmmRegisters = (M128A *)((char *)&Source->1 + 460);
                v6 = (_DWORD)Context + 716;
                LOBYTE(v15) = (v9 & 0x10020) != 65568;
                if ( ((unsigned __int8)v15 & ((v12 & 0x10020) == 65568)) != 0 )
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
            if ( (v16 & 2) == 0 )
              return v14;
            result = RtlpCopyXStateChunk(v15, v6, v6, (_DWORD)XmmRegisters, (__int64)XmmRegisters);
            v14 = result;
            if ( result >= 0 )
              return v14;
          }
        }
      }
    }
  }
  return result;
}
