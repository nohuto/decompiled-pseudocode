/*
 * XREFs of SetCopyProtectionOnTerminal @ 0x1C00190C4
 * Callers:
 *     WalkConnectionsToTerminal @ 0x1C00191FC (WalkConnectionsToTerminal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007440 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SetCopyProtectionOnTerminal(PIRP Irp, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // rbp
  PKSFILTER FilterFromIrp; // r14
  PKSPIN PinFromIrp; // rax
  int v8; // r9d
  PKSPIN v9; // rdi
  _QWORD *Context; // r11
  ULONG Id; // edx
  __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int *v15; // rbx
  unsigned int v16; // eax
  unsigned int v17; // eax

  v4 = a2;
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  PinFromIrp = KsGetPinFromIrp(Irp);
  v8 = 0;
  v9 = PinFromIrp;
  if ( !PinFromIrp )
    return 3221225485LL;
  Context = PinFromIrp->Context;
  if ( FilterFromIrp )
  {
    Id = PinFromIrp->Id;
    if ( Id < FilterFromIrp->Descriptor->PinDescriptorsCount )
    {
      if ( *((_BYTE *)&FilterFromIrp->Descriptor->PinDescriptors[1].AutomationTable + 176 * v4 + 5) )
      {
        if ( !a3[2] )
        {
          v13 = *((_QWORD *)FilterFromIrp->Context + 2);
          v14 = *(_DWORD *)(v13 + 192);
          v15 = *(unsigned int **)(v13 + 200);
          v16 = 0;
          if ( !v14 )
            return (unsigned int)-1073741275;
          do
          {
            if ( v15[21] == Id )
              break;
            v15 += 38;
            ++v16;
          }
          while ( v16 < v14 );
          if ( v16 >= v14 )
            return (unsigned int)-1073741275;
          v17 = v15[26];
          if ( v17 == Id || v17 == -1 )
          {
            v8 = (*(__int64 (__fastcall **)(PKSPIN, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(Context[16] + 128LL) + 72LL))(
                   v9,
                   *a3,
                   v15[20],
                   0LL);
            if ( v8 < 0 )
            {
              if ( !*a3 )
                return 0;
            }
            else if ( *a3 )
            {
              v15[26] = v9->Id;
            }
            else
            {
              v15[26] = -1;
            }
            return (unsigned int)v8;
          }
        }
        return (unsigned int)-1073741637;
      }
    }
  }
  return (unsigned int)v8;
}
