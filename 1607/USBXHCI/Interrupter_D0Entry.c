/*
 * XREFs of Interrupter_D0Entry @ 0x1C0004E40
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0006D00 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C0004F30 (Interrupter_InterrupterRegisterIntialize.c)
 *     Controller_IsControllerAccessible @ 0x1C0005C54 (Controller_IsControllerAccessible.c)
 *     memset @ 0x1C0010200 (memset.c)
 *     WPP_RECORDER_SF_qL @ 0x1C001CC74 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall Interrupter_D0Entry(__int64 a1, int a2, char a3)
{
  unsigned int i; // r14d
  __int64 v6; // rbp
  __int64 *v7; // rdi
  __int64 *v8; // rbx
  __int64 v9; // rax
  char v11; // [rsp+30h] [rbp-28h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v11 = a2;
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_qL(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      a2,
      8,
      25,
      (__int64)&WPP_743231bee2de335fe7554effc40d8bb7_Traceguids,
      a1,
      v11);
  }
  if ( (unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    if ( !a3 )
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 24); *(_DWORD *)(v6 + 136) = 0 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * i);
        v7 = (__int64 *)(v6 + 168);
        v8 = *(__int64 **)(v6 + 168);
        if ( v8 != (__int64 *)(v6 + 168) )
        {
          do
          {
            memset((void *)v8[2], 0, *((unsigned int *)v8 + 10));
            v8 = (__int64 *)*v8;
          }
          while ( v8 != v7 );
        }
        v9 = *v7;
        ++i;
        *(_QWORD *)(v6 + 152) = *v7;
        *(_QWORD *)(v6 + 144) = *(_QWORD *)(v9 + 16);
        *(_QWORD *)(v6 + 128) = 1LL;
      }
    }
    Interrupter_InterrupterRegisterIntialize(a1);
  }
  return 0LL;
}
