/*
 * XREFs of SeEtwEnableCallback @ 0x14014C1B4
 * Callers:
 *     EtwpKernelProvEnableCallback @ 0x140580AB8 (EtwpKernelProvEnableCallback.c)
 * Callees:
 *     <none>
 */

int *__fastcall SeEtwEnableCallback(__int64 a1, __int64 a2, __int64 a3, char a4, int a5, int **a6)
{
  int *result; // rax

  if ( (a4 & 0x20) != 0 && (result = (int *)a6) != 0LL && *((_DWORD *)a6 + 3) == 1 && *((_DWORD *)a6 + 2) == 4 )
  {
    byte_1403296DC = 1;
    result = *a6;
    SepLearningModeSettings = **a6;
  }
  else
  {
    byte_1403296DC = 0;
    SepLearningModeSettings = 0;
  }
  byte_1403296DD = 0;
  SepTokenSidManagementLoggingEnabled = (a4 & 0x40) != 0;
  return result;
}
