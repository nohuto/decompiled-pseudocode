/*
 * XREFs of RaUnitAtaPassThroughValidateInput @ 0x1C0001530
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001000 (RaUnitAtaPassThroughIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     memset @ 0x1C0013300 (memset.c)
 *     RaidpIsControlledWinPEEnvironment @ 0x1C00272CC (RaidpIsControlledWinPEEnvironment.c)
 */

__int64 __fastcall RaUnitAtaPassThroughValidateInput(__int64 a1, IRP *a2, char a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Length; // r15d
  __int64 Options; // rsi
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  int v11; // edi
  _IRP *MasterIrp; // rdx
  _IRP *v13; // rbx
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // ax
  __int64 v16; // rcx
  unsigned __int16 Size; // ax
  __int128 v19; // xmm0
  __int64 v20; // xmm1_8
  _BYTE *v21; // rcx
  const char *i; // rdx
  __int128 v23; // [rsp+20h] [rbp-68h] BYREF
  __int64 v24; // [rsp+30h] [rbp-58h]
  __int64 v25; // [rsp+38h] [rbp-50h]
  _IRP *v26; // [rsp+40h] [rbp-48h]
  _LIST_ENTRY *Flink; // [rsp+48h] [rbp-40h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v11 = 0;
  if ( IoIs32bitProcess(a2) )
  {
    if ( (unsigned int)Options < 0x28 )
      return 3221225485LL;
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( MasterIrp->Type == 40 )
    {
      Size = MasterIrp->Size;
      if ( (Size & 4) != 0 && !LODWORD(MasterIrp->MdlAddress) || (Size & 2) != 0 && !LODWORD(MasterIrp->MdlAddress) )
        return 3221225485LL;
      v13 = (_IRP *)&v23;
      v19 = *(_OWORD *)&MasterIrp->Type;
      Flink = MasterIrp->ThreadListEntry.Flink;
      v20 = *(_QWORD *)&MasterIrp->Flags;
      v26 = MasterIrp->AssociatedIrp.MasterIrp;
      v25 = *(&MasterIrp->Flags + 1);
      v23 = v19;
      v24 = v20;
      goto LABEL_7;
    }
    return 3221225561LL;
  }
  if ( (unsigned int)Options < 0x30 )
    return 3221225485LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v13 = MasterIrp;
  if ( MasterIrp->Type != 48 )
    return 3221225561LL;
  v14 = MasterIrp->Size;
  if ( (v14 & 4) != 0 && !LODWORD(MasterIrp->MdlAddress) || (v14 & 2) != 0 && !LODWORD(MasterIrp->MdlAddress) )
    return 3221225485LL;
LABEL_7:
  if ( a3 )
  {
    v16 = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 152LL);
    if ( (v16 & (__int64)v13->AssociatedIrp.MasterIrp) == 0 )
      goto LABEL_15;
    return 3221225485LL;
  }
  v10 = (unsigned __int64)v13->AssociatedIrp.MasterIrp;
  if ( (unsigned __int16)v13->Type > v10 && LODWORD(v13->MdlAddress) )
    return 3221225485LL;
  if ( v10 > 0xFFFFFFFF )
    return 3221225621LL;
  v9 = (unsigned int)(v10 + LODWORD(v13->MdlAddress));
  if ( (unsigned int)v9 < (unsigned int)v10 )
    return 3221225621LL;
  v15 = v13->Size;
  if ( (v15 & 4) != 0 && (unsigned int)v9 > (unsigned int)Options )
    return 3221225485LL;
  if ( (v15 & 2) != 0 && (unsigned int)v9 > Length )
    return 3221225485LL;
  v16 = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 152LL);
  if ( (((unsigned __int64)MasterIrp + v10) & v16) != 0 )
    return 3221225485LL;
LABEL_15:
  if ( ((unsigned int)v16 & (__int64)v13->MdlAddress) != 0 || (unsigned int)(HIDWORD(v13->MdlAddress) - 1) > 0x1A5DF )
    return 3221225485LL;
  if ( Length > (unsigned int)Options )
    memset((char *)MasterIrp + Options, 0, Length - (unsigned int)Options);
  if ( BYTE6(v13->ThreadListEntry.Blink) != 0xB4
    || (unsigned __int8)RaidpIsControlledWinPEEnvironment(v16, MasterIrp, v9, v10, v23, *((_QWORD *)&v23 + 1)) )
  {
    if ( BYTE6(v13->ThreadListEntry.Blink) != 0xF1 )
      return 0LL;
    if ( !a3 )
    {
      if ( (unsigned __int8)RaidpIsControlledWinPEEnvironment(v16, MasterIrp, v9, v10, v23, *((_QWORD *)&v23 + 1)) )
      {
        v21 = (char *)v13->AssociatedIrp.MasterIrp + (unsigned __int64)a2->AssociatedIrp.MasterIrp;
        if ( (unsigned int)Options >= 0x230 && LODWORD(v13->MdlAddress) >= 0x200 && (*v21 & 1) == 0 )
        {
          for ( i = "AutoATAWindowsString12345678901";
                *(unsigned __int8 *)i == i[v21 + 2 - "AutoATAWindowsString12345678901"];
                ++i )
          {
            if ( (unsigned int)++v11 >= 0x20 )
              return 0LL;
          }
        }
      }
    }
    return 3221225485LL;
  }
  return 3221225659LL;
}
