/*
 * XREFs of NVMeHwStartIo @ 0x1C0002530
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C0002690 (ProcessCommand.c)
 *     NVMeControllerPowerDown @ 0x1C0006FD8 (NVMeControllerPowerDown.c)
 */

char __fastcall NVMeHwStartIo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v6; // dl
  int v7; // eax
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  bool v10; // zf
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rcx

  v6 = *(_BYTE *)(a2 + 2);
  if ( v6 == 40 )
    v7 = *(_DWORD *)(a2 + 20);
  else
    v7 = v6;
  v8 = 0x1C0000000uLL;
  switch ( v7 )
  {
    case 0:
    case 2:
    case 9:
      break;
    case 7:
      if ( *(_BYTE *)(a1 + 16) )
        NVMeControllerPowerDown(a1);
      if ( *(_BYTE *)(a2 + 2) == 40 )
        v12 = *(unsigned __int8 *)(a2 + *(unsigned int *)(a2 + 52) + 10);
      else
        v12 = *(unsigned __int8 *)(a2 + 7);
      if ( (unsigned int)v12 < *(_DWORD *)(a1 + 148) )
      {
        v13 = *(_QWORD *)(a1 + 8 * v12 + 1184);
        if ( v13 )
          *(_DWORD *)(v13 + 20) |= 2u;
      }
      *(_BYTE *)(a2 + 3) = 1;
      break;
    case 37:
      if ( v6 == 40 )
      {
        v9 = a2 + *(unsigned int *)(a2 + 120);
        v10 = *(_DWORD *)(v9 + 16) == 1;
        v11 = *(_DWORD *)(v9 + 12);
      }
      else
      {
        v10 = *(_DWORD *)(a2 + 64) == 1;
        v11 = *(_DWORD *)(a2 + 8);
      }
      if ( v10 )
      {
        if ( v11 == 2 || v11 == 23 )
        {
          *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFF6 | 8;
          *(_BYTE *)(a2 + 3) = 1;
        }
        else
        {
          if ( v11 != 4 )
            goto LABEL_23;
          *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFFC | 2;
          *(_BYTE *)(a2 + 3) = 1;
        }
      }
      break;
    default:
LABEL_23:
      *(_BYTE *)(a2 + 3) = 6;
      break;
  }
  if ( *(_BYTE *)(a2 + 3) )
    StorPortNotification(0LL, a1, a2);
  else
    ProcessCommand(a1, a2, v8, a4);
  return 1;
}
