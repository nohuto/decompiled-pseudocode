/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x1404C2B8C
 * Callers:
 *     <none>
 * Callees:
 *     EvaluateCurrentState @ 0x1401B8354 (EvaluateCurrentState.c)
 *     ObCreateObjectEx @ 0x14041D970 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14041EF00 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateWaitCompletionPacket(__int64 *a1, unsigned int a2, __int64 a3)
{
  char PreviousMode; // si
  __int64 v6; // rdx
  int inserted; // ecx
  _BYTE *v8; // rbx
  __int64 v10; // [rsp+20h] [rbp-58h]
  __int64 v11; // [rsp+58h] [rbp-20h] BYREF
  PVOID Object[2]; // [rsp+60h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = (__int64)a1;
    if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  inserted = ObCreateObjectEx(
               PreviousMode,
               IopWaitCompletionPacketObjectType,
               a3,
               PreviousMode,
               v10,
               112,
               0,
               0,
               Object,
               0LL);
  if ( inserted >= 0 )
  {
    v8 = Object[0];
    *((_QWORD *)Object[0] + 12) = 0LL;
    v8[104] = 0;
    if ( EvaluateCurrentState((_DWORD **)&g_Feature_2544326971_59422651_FeatureDescriptorDetails) )
    {
      v8[105] = 0;
      *((_QWORD *)v8 + 11) = 0LL;
    }
    inserted = ObInsertObjectEx(v8, 0LL, a2, 0, 0, 0LL, (unsigned __int64 *)&v11);
    if ( inserted >= 0 )
      *a1 = v11;
  }
  return (unsigned int)inserted;
}
