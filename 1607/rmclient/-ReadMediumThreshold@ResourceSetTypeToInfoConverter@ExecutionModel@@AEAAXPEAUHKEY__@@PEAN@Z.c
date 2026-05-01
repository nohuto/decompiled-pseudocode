/*
 * XREFs of ?ReadMediumThreshold@ResourceSetTypeToInfoConverter@ExecutionModel@@AEAAXPEAUHKEY__@@PEAN@Z @ 0x18000525C
 * Callers:
 *     ?Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z @ 0x1800052E0 (-Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::ResourceSetTypeToInfoConverter::ReadMediumThreshold(
        ExecutionModel::ResourceSetTypeToInfoConverter *this,
        HKEY a2,
        double *a3)
{
  int v4; // ecx
  DWORD v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+54h] [rbp+Ch]
  int v7; // [rsp+60h] [rbp+18h] BYREF

  v6 = HIDWORD(this);
  v5 = 4;
  if ( RegGetValueW(a2, 0LL, L"MediumCommitWarningThreshold", 0x10u, 0LL, &v7, &v5)
    || (v4 = v7, (unsigned int)(v7 - 1) > 0x63) )
  {
    v4 = 50;
  }
  *a3 = (double)v4 / 100.0;
}
