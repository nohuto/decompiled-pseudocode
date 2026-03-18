/*
 * XREFs of ProcessCommandInSpecificQueue @ 0x1C000E6E8
 * Callers:
 *     ProcessCommand @ 0x1C0002690 (ProcessCommand.c)
 * Callees:
 *     SrbAssignCommandId @ 0x1C00027D0 (SrbAssignCommandId.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     IsInternalSrb @ 0x1C00047E8 (IsInternalSrb.c)
 */

char __fastcall ProcessCommandInSpecificQueue(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int64 v8; // rdx
  __int64 SrbExtension; // r14
  char v10; // di
  __int64 v11; // r8
  __int64 v12; // rcx
  _OWORD *v13; // rdx
  int v14; // eax
  signed __int32 v16[8]; // [rsp+0h] [rbp-50h] BYREF
  int *v17; // [rsp+20h] [rbp-30h]
  int v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h]
  __int64 v20; // [rsp+40h] [rbp-10h]
  __int64 v21; // [rsp+48h] [rbp-8h]

  SrbExtension = GetSrbExtension(a2);
  v19 = 0LL;
  v10 = 1;
  v20 = 0LL;
  v18 = 1;
  v21 = 0LL;
  if ( !*(_WORD *)(v11 + 40) )
    _InterlockedAdd16((volatile signed __int16 *)(a1 + 236), 1u);
  if ( (*(_DWORD *)(a1 + 20) & 0x10) != 0 )
  {
    *(_BYTE *)(v8 + 3) = 14;
LABEL_16:
    v10 = 0;
    goto LABEL_17;
  }
  v17 = &v18;
  StorPortNotification(4099LL, a1, 1LL);
  if ( !SrbAssignCommandId(a1, SrbExtension, *(_WORD *)(a3 + 40)) )
  {
    StorPortNotification(4100LL, a1, &v18);
    *(_BYTE *)(a2 + 3) = 5;
    goto LABEL_16;
  }
  v12 = *(unsigned __int16 *)(SrbExtension + 4238);
  *(_WORD *)(SrbExtension + 4098) = v12;
  *(_QWORD *)(*(_QWORD *)(a3 + 32) + 16 * v12) = a2;
  *(_WORD *)(*(_QWORD *)(a3 + 32) + 16LL * *(unsigned __int16 *)(SrbExtension + 4238) + 8) = *(_WORD *)(SrbExtension + 4240);
  v13 = *(_OWORD **)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(SrbExtension + 4240));
  *v13 = *(_OWORD *)(SrbExtension + 4096);
  v13[1] = *(_OWORD *)(SrbExtension + 4112);
  v13[2] = *(_OWORD *)(SrbExtension + 4128);
  v13[3] = *(_OWORD *)(SrbExtension + 4144);
  *(_WORD *)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(SrbExtension + 4240) + 8) = *(_WORD *)(SrbExtension + 4238);
  if ( (*(_BYTE *)(a1 + 17) || (*(_DWORD *)(a1 + 88) & 2) != 0) && !IsInternalSrb(a1, a2) )
  {
    StorPortExtendedFunction(47LL, a1, 0LL);
    *(_QWORD *)(SrbExtension + 4160) = 0LL;
  }
  _InterlockedAdd16((volatile signed __int16 *)(a3 + 128), 1u);
  v14 = (unsigned __int16)(*(_WORD *)(SrbExtension + 4240) + 1);
  if ( (_WORD)v14 == a4 )
    v14 = 0;
  **(_DWORD **)(a3 + 16) = v14;
  _InterlockedOr(v16, 0);
  if ( *(_QWORD *)(SrbExtension + 4160) )
  {
    StorPortExtendedFunction(47LL, a1, 0LL);
    *(_QWORD *)(SrbExtension + 4168) = 0LL;
  }
  StorPortNotification(4100LL, a1, &v18);
LABEL_17:
  if ( !*(_WORD *)(a3 + 40) )
    _InterlockedDecrement16((volatile signed __int16 *)(a1 + 236));
  return v10;
}
